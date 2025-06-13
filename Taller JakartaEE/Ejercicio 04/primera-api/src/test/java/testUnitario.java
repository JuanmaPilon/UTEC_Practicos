import api.aplicacion.IControladorService;
import api.Empleado;
import api.Tarea;
import api.aplicacion.impl.*;
import jakarta.inject.Inject;
import org.junit.jupiter.api.Test;

public class testUnitario {



	private IControladorService controlador = new ControladorServiceImpl();
	
	@Test
	public void testGeneral() {
		
		
		controlador.inicializarEmpleados();
		
		for(Empleado empleado : controlador.listarEmpleados() ) {
			System.out.println(empleado.toString());
		}
		
		controlador.agregarEmpleados(0,"Martinez","1.455.512-2");
		
		System.out.println("Se ha añadido el empleado con exito \n");
		
		for(Empleado empleado : controlador.listarEmpleados() ) {
			System.out.println(empleado.toString());
		}
		
		System.out.println("\n Imprimiendo tareas \n");
		
		controlador.inicializarTareas();
		for(Tarea tareas : controlador.listarTareas()) {
			System.out.println(tareas.toString());
		}
		
		System.out.println("Borrando empleado: mirta \n");
		
		controlador.borrarEmpleados(2);
		
		for(Empleado empleado : controlador.listarEmpleados() ) {
			System.out.println(empleado.toString());
		}
		System.out.println("Obteniendo Tarea: Hacer informe \n");
		System.out.println(controlador.obtenerTarea(1).toString());
		 
		
		System.out.println("Obtener empleado Martinez: \n");
		System.out.println(controlador.obtenerEmpleado(0).toString());
		
		System.out.println("Agregando Tarea Hacer Informe a martinez");
		controlador.agregarTareaEmpleado(0, 1);
		controlador.agregarTareaEmpleado(0, 2);
		controlador.agregarTareaEmpleado(0, 3);
		
		System.out.println("Obtener empleado Martinez: \n");
		System.out.println(controlador.obtenerEmpleado(0).toString());
		
		
		System.out.println("\n Obteniendo tareas de martinez \n");
		System.out.println(controlador.listaTareasEmpleado(0).toString());
	}
}
