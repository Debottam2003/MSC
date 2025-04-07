package factory;
public class Sms implements Notification{

    @Override
    public void show() {
        System.out.println("This is a SMS using show method");
    }

    @Override
    public void display() {
        System.out.println("This is a SMS using display method");
    }
    
}
