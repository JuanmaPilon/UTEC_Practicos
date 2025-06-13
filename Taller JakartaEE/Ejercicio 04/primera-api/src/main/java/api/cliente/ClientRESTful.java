package api.cliente;

import java.util.List;

import api.Empleado;
import api.Tarea;
import api.aplicacion.IControladorService;
import io.swagger.v3.oas.annotations.Operation;
import io.swagger.v3.oas.annotations.responses.ApiResponse;
import io.swagger.v3.oas.annotations.responses.ApiResponses;
import io.swagger.v3.oas.annotations.tags.Tag;
import jakarta.enterprise.context.ApplicationScoped;
import jakarta.inject.Inject;
import jakarta.ws.rs.Path;
import jakarta.ws.rs.Consumes;
import jakarta.ws.rs.DELETE;
import jakarta.ws.rs.GET;
import jakarta.ws.rs.POST;
import jakarta.ws.rs.PUT;
import jakarta.ws.rs.Path;
import jakarta.ws.rs.PathParam;
import jakarta.ws.rs.Produces;
import jakarta.ws.rs.QueryParam;
import jakarta.ws.rs.core.MediaType;
import jakarta.ws.rs.core.Response;

@Tag(name="API de empleados")
@ApplicationScoped
@Path("/empleados")
public class ClientRESTful {
	
	@Inject
	private IControladorService controlador;
	
	
	//formacion del link finalName(pom.xml)/urlPattern(web.xml)/Path
	
	/**
	 * curl -v http://localhost:8080/EmpleadosAPI/api/empleados
	 * @return
	 */
	@Operation(summary = "Obtener lista de empleados", description = "Obtiene una lista con todos los empelados y sus tareas.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Lista de empleados devuelta exitosamente."),
			@ApiResponse(responseCode = "404", description = "No se encontraron empleados.")
	})
	@GET
	@Produces({MediaType.APPLICATION_JSON})
	public List<Empleado> obtenerEmpleados() {
		System.out.println("Retornando todos los empleados");
		return controlador.listarEmpleados();
	}
	
	/**
	 * curl -v http://localhost:8080/EmpleadosAPI/api/empleados/2
	 * @param id
	 * @return
	 */
	@Operation(summary = "Obtener empleado", description = "Obtiene los datos de un usuario empleado especifico.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Empleado devuelto exitosamente."),
			@ApiResponse(responseCode = "404", description = "No se encontraró el empleado.")
	})
	@Path("/{id}")
	@GET
	@Produces({MediaType.APPLICATION_JSON})
	public Empleado getEmpleado(@PathParam("id") Integer id) {
		System.out.println("Buscando empleado especifico" + id);
		return controlador.obtenerEmpleado(id);
	}
	

	/**
	 * Peticion rol autorizado
	 * curl --cacert certificadoPrueba.pem --user gerente:1234 -v https://localhost:8443/EmpleadosAPI/api/empleados/gerente/tareaEmpleado/2
	 * 
	 * Peticion rol no autorizado
	 * curl --cacert certificadoPrueba.pem --user recursosHumanos:1234 -v https://localhost:8443/EmpleadosAPI/api/empleados/gerente/tareaEmpleado/2
	 * 
	 * 
	 * curl -v http://localhost:8080/EmpleadosAPI/api/empleados/tareaEmpleado/1
	 * @param id
	 * @return
	 */
	@Operation(summary = "Obtener tareas empleado", description = "Obtiene las tareas de un empleado especifico.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Empleado devuelto exitosamente."),
			@ApiResponse(responseCode = "404", description = "No se encontraró el empleado."),
			@ApiResponse(responseCode = "403", description = "Usuario no autorizado.")
	})
	@Path("/gerente/tareaEmpleado/{id}")
	@GET
	@Produces({MediaType.APPLICATION_JSON})
	public List<Tarea> getTareasEmplead(@PathParam("id") Integer id) {
		System.out.println("Buscando tareas del empleado: " + id);
		return controlador.listaTareasEmpleado(id);
	}
	
	/**
	 *
	 * curl --user recursosHumanos:1234 -v http://localhost:8080/Build_api/api/empleados/recursosHumanos/
	 * Peticion rol autorizado
	 * 	 
	 * curl --cacert certificadoPrueba.pem --user recursosHumanos:1234 -v -X POST -H "Content-Type: application/json" -d '{"id":23,"nombre":"Messi","cedula":"123456789"}' https://localhost:8443/EmpleadosAPI/api/empleados/recursosHumanos/
	 * 
	 * Peticion rol no autorizado
	 * curl --cacert certificadoPrueba.pem --user gerente:1234 -v -X POST -H "Content-Type: application/json" -d '{"id":23,"nombre":"Messi","cedula":"123456789"}' https://localhost:8443/EmpleadosAPI/api/empleados/recursosHumanos/
	 * 
	 * curl -X POST -H "Content-Type: application/json" -d '{"id":1,"nombre":"Juan","cedula":"123456789"}' http://localhost:8080/EmpleadosAPI/api/empleados
	 * @param empleado
	 */
	@Operation(summary = "Crear un empleado", description = "Crea un usuario de tipo empleado.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Empleado creado exitosamente"),
			@ApiResponse(responseCode = "404", description = "No se pudo crear el empleado."),
			@ApiResponse(responseCode = "403", description = "Usuario no autorizado.")
	})
	@POST
	@Consumes(MediaType.APPLICATION_JSON) //tenemos que indicar como viene formateada la información
	@Path("/recursosHumanos/")
	@Produces({MediaType.APPLICATION_JSON})
	public Empleado crearEmpleado(Empleado empleado) {
		System.out.println("Creando nuevo empleado");
		controlador.agregarEmpleados(empleado.getId(), empleado.getNombre(), empleado.getCedula());
		return empleado;
	}
	
	
	/**
	 * Peticion rol autorizado
	 *curl --cacert certificadoPrueba.pem --user gerente:1234 -v -X DELETE https://localhost:8443/EmpleadosAPI/api/empleados/recursosHumanos/2
	 *
	 *Peticion rol no autorizado
	 * curl --cacert certificadoPrueba.pem --user recursosHumanos:1234 -v -X DELETE https://localhost:8443/EmpleadosAPI/api/empleados/recursosHumanos/2
	 * 

	 * curl -X DELETE -H "Content-Type : application/json" -d '{"id" : 0 ,}' http://localhost:8080/EmpleadosAPI/api/empleados/1
	 * curl -X DELETE http://localhost:8080/EmpleadosAPI/api/empleados/0
	 * @param id
	 */
	@Operation(summary = "Eliminar un empleado", description = "Eliminaun usuario de tipo empleado.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Empleado eliminado exitosamente"),
			@ApiResponse(responseCode = "404", description = "No se pudo eliminar el empleado."),
			@ApiResponse(responseCode = "403", description = "Usuario no autorizado.")
	})
	@DELETE
	@Consumes(MediaType.APPLICATION_JSON)
	@Path("/recursosHumanos/{id}") //
	public Response eliminarEmpleado(@PathParam("id") Integer id) {
		System.out.println("Eliminando empleado" + id);
		controlador.borrarEmpleados(id);
		return  Response.status(Response.Status.CREATED).entity("El empleado con el id: " + id + " fue eliminado correctamente").build();
	}
	
	//curl -v -X PUT -H "Content-Type: application/json" -d '{"idEmpleado":1,"idTarea":1}' https://localhost:8080/EmpleadosAPI/api/empleados/asignarTarea
	@Operation(summary = "Asignar tarea a empleado", description = "Asigna una tarea a un empleado.")
	@ApiResponses(value= {
			@ApiResponse(responseCode = "200", description = "Tarea asignada al empleado correctamente"),
			@ApiResponse(responseCode = "404", description = "No se pudo asignar la tarea al empleado")
	})
	@PUT
	@Consumes(MediaType.APPLICATION_JSON)
	@Path("/asignarTarea")
	@Produces({MediaType.APPLICATION_JSON})
	public Response asignarTarea(@QueryParam("idEmpleado") Integer idEmpleado, @QueryParam("idTarea") Integer idTarea) {
		System.out.println("Asignando tarea con id:" + idTarea + "Al empleado con id: " + idEmpleado);
		controlador.agregarTareaEmpleado(idEmpleado, idTarea);
		return  Response.status(Response.Status.CREATED).entity("Tarea " + idTarea + " asignada al Empleado " +idEmpleado+ " correctamente").build();
	}
}
