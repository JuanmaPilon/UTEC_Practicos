package api;

import java.time.LocalDate;

public class Tarea {
	
	private Integer id;
	private String descripcion;
	private LocalDate fechaInicio;
	private LocalDate fechaFin;
	
	public Tarea() {
		
	}
	
	public Tarea(Integer id, String descripcion, LocalDate fechaInicio, LocalDate fechaFin) {
		this.id = id;
		this.descripcion = descripcion;
		this.fechaInicio = fechaInicio;
		this.fechaFin = fechaFin;
	}
	
	public Tarea(Integer id) {
		this.id = id;
	}
	
	public Integer getId() {
		return id;
	}
	public void setId(Integer id) {
		this.id = id;
	}
	
	public String getDescripcion() {
		return descripcion;
	}
	public void setDescripcion(String descripcion) {
		this.descripcion = descripcion;
	}
	
	public LocalDate getFechaInicio() {
		return fechaInicio;
	}
	public void setFechaInicio(LocalDate fechaInicio) {
		this.fechaInicio = fechaInicio;
	}
	
	public LocalDate getFechaFin() {
		return fechaFin;
	}
	public void setFechaFin(LocalDate fechaFin) {
		this.fechaFin = fechaFin;
	}
	
	@Override
	public String toString() {
		return "Tarea [id:" + id + "\nDescripcion:" + descripcion + "\nFecha de Inicio:" + fechaInicio + "\nFecha de fin:" + fechaFin + "]\n";
	}
	
}
