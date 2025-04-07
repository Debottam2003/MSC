package factory;
public class Buzzer implements Notification{
    @Override
    public void show() {
        System.out.println("This is a Buzzer using show method");
    }
    @Override
    public void display() {
        System.out.println("This is a Buzzer using display method");
    }
}
