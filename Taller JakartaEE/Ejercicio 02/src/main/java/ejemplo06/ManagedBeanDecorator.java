package ejemplo06;

import jakarta.decorator.Decorator;
import jakarta.decorator.Delegate;
import jakarta.enterprise.inject.Decorated;
import jakarta.inject.Inject;

@Decorator
public abstract class ManagedBeanDecorator extends ManagedBeanBase {
    
    @Inject
    @Delegate
    @Decorated
    private ManagedBeanBase managedBeanBase;
    
    public abstract String getMessage();
    
    public String decoratedMessage() {
        String originalMessage = managedBeanBase.getMessage();
        return originalMessage + " Funca? Of cors";
    }
}