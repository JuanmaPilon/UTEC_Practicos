package api.aplicacion;

import java.util.List;

import api.Empleado;
import api.Tarea;

public interface IControladorService {
	/**
	 * Crea un empleado nuevo.
	 * 
	 * @param id -> Identificador del empleado a crear
	 * @param nombre -> Nombre del empleado a crear
	 * @param cedula -> cedula del empleado a crear
	 */
	public void agregarEmpleados(Integer id, String nombre, String cedula); //tic
	
	/**
	 * Borrar un empleado, según su identificador, el empleado no puede tener
	 * tareas al momento de ser eliminado.
	 * 
	 * @param id -> id del empleado a borrar
	 */
	public void borrarEmpleados(Integer id); //tic
	
	/**
	 * Lista todos los empleados registrados en el sistema
	 * @return devuelve una lista con los datos de todos los empleados
	 */
	public List<Empleado> listarEmpleados(); //tic
	
	/**
	 * Lista todas las tareas registradas en el sistema
	 * @return devuelve una lista con los datos de todas las tareas.
	 */
	public List<Tarea> listarTareas();//tic
	
	/**
	 * Obtiene un empleado especifico
	 * @param id -> id del empleado a buscar
	 * @return Devuelve el objeto del empleado buscado.
	 */
	public Empleado obtenerEmpleado(Integer id);//tic
		
	/**
	 * Le asigna una tarea a un emplead
	 * @param idEmpleado -> id del empleado
	 * @param idTarea -> id de la tarea a asignar
	 */
	public void agregarTareaEmpleado(Integer idEmpleado, Integer idTarea);//tic
	
	/**
	 * Lista solo las tareas de un empleado especifico
	 * @param idEmpleado -> id del empleado
	 * @return devuelve una lista de tareas de dicho empleado
	 */
	public List<Tarea> listaTareasEmpleado(Integer idEmpleado);//tic
	
	/**
	 * Obtiene una tarea especifica
	 * @param id -> id de la tarea a buscar
	 * @return devuelve el objeto de la tarea buscada
	 */
	public Tarea obtenerTarea(Integer id);//tic
	
	
	/**
	 * Carga un conjunto de datos de empleados, para probar el sistema
	 */
	public void inicializarEmpleados(); //tic
	
	/**
	 * Carga un conjunto de datos de tareas, para probar el sistema.
	 */
	public void inicializarTareas();//tic
}
