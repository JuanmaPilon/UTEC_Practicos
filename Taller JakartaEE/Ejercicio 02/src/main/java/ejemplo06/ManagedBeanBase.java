package ejemplo06;

import jakarta.enterprise.context.RequestScoped;
import jakarta.inject.Named;

@Named("managedBeanBase")
@RequestScoped
public class ManagedBeanBase {
    
    public String getMessage() {
        return "Este es un managed bean";
    }
}