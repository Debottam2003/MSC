package factory;
public class Email implements Notification{
    @Override
    public void show() {
        System.out.println("This is an Email using show method");
    }

    @Override
    public void display() {
        System.out.println("This is an Email using display method");
    }
}
