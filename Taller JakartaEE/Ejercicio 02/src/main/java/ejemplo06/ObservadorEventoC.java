package ejemplo06;

import jakarta.enterprise.context.ApplicationScoped;
import jakarta.enterprise.event.Observes;

@ApplicationScoped
public class ObservadorEventoC {
	
	public void accept(@Observes Evento evento) {
	        System.out.println("Soy C: He recibido un evento: " + evento.getDescripcion());
	 }
}
