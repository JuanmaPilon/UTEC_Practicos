package ejemplo06;

import jakarta.enterprise.context.ApplicationScoped;
import jakarta.enterprise.event.Observes;

@ApplicationScoped
public class ObservadorNuevoEvento {
    
    public void accept(@Observes NuevoEvento evento) {
        System.out.println("Nuevo observador: He recibido un evento: " + evento.getDescripcion());
    }
}