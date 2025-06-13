package ejemplo07.dominio;

public class Cliente {
	private int id;
	private String nombre;
	
	public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
	
	public Cliente(String nombre) {
		super();
		this.nombre = nombre;
	}

	@Override
	public String toString() {
		return "Cliente [nombre=" + nombre + "]";
	}
	
	
	//otros atributos y lógica de negocio
	
}
