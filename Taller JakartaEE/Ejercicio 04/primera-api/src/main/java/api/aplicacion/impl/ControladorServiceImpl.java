package api.aplicacion.impl;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

import api.Empleado;
import api.Tarea;
import api.aplicacion.IControladorService;


import jakarta.annotation.PostConstruct;
import jakarta.enterprise.context.ApplicationScoped;

@ApplicationScoped
public class ControladorServiceImpl implements IControladorService {

	List<Empleado> empleados;
	List<Tarea> tareas;
	
	
	@PostConstruct
	public void inicializar() {
		inicializarEmpleados();
		inicializarTareas();
	}
	
	public void inicializarEmpleados() {
		System.out.println("Invocando PostConstruct");
		this.empleados = new ArrayList<Empleado>();
		empleados.add(new Empleado(1,"Juan", "1.111.111-1", null));
		empleados.add(new Empleado(2,"Carlos", "2.222.222-2", null));
		empleados.add(new Empleado(3,"Nicolas", "3.333.333-3", null));
		empleados.add(new Empleado(4,"Andres", "4.444.444-4", null));

	}

	public void inicializarTareas() {
        this.tareas = new ArrayList<>();
        LocalDate fechaActual = LocalDate.now();
        
    
        tareas.add(new Tarea(1, "Tarea1", fechaActual , fechaActual.plusDays(10)));
        tareas.add(new Tarea(2, "Tarea2", fechaActual , fechaActual.plusDays(20)));
        tareas.add(new Tarea(3, "Tarea3", fechaActual , fechaActual.plusDays(30)));     
    }
	
	
	@Override
	public void agregarEmpleados(Integer id, String nombre, String cedula) {
		empleados.add(new Empleado(id,nombre,cedula, null));
		
	}

	@Override
	public void borrarEmpleados(Integer id) {
		Empleado empleadoABorrar = obtenerEmpleado(id);
		if(empleadoABorrar.getTareasEmpleado() == null) {
			empleados.remove(empleadoABorrar);			
		}
		
	}

	@Override
	public List<Empleado> listarEmpleados() {
		return this.empleados;
	}

	@Override
	public Empleado obtenerEmpleado(Integer id) {
		
		for(int i = 0; i < this.empleados.size(); i++) {
			if(this.empleados.get(i).getId().equals(id)) {
				return this.empleados.get(i);
			}
		}	
		return null;
	}
	
	@Override
	public Tarea obtenerTarea(Integer id) {
		
		for(int i = 0; i < this.tareas.size(); i++) {
			if(this.tareas.get(i).getId().equals(id)) {
				return this.tareas.get(i);
			}
		}
		
		return null;
	}

	@Override
	public void agregarTareaEmpleado(Integer idEmpleado, Integer idTarea) {
		Empleado empleado = obtenerEmpleado(idEmpleado);
		
		Tarea tarea = obtenerTarea(idTarea);
		
		empleado.agregarTarea(tarea);
	
	}

	@Override
	public List<Tarea> listarTareas() {
		return this.tareas;
	}
	
	@Override
	public List<Tarea> listaTareasEmpleado(Integer idEmpleado) {
		
		for(int i = 0; i < this.empleados.size(); i++) {
			if(this.empleados.get(i).getId().equals(idEmpleado)) {
				return this.empleados.get(i).getTareasEmpleado();
			}
		}
		
		return null;
	}

}
