import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        System.out.println("This is the main function...");
        Email e = new Email("This is an Email type Notification...");
        Email enew = e.create();
        System.out.println(enew);
        Factory f = new Factory();
        System.out.println("Enter the sms type: ");
        Scanner sc = new Scanner(System.in);
        String text = sc.nextLine();
        Notifications n = f.ConcreteObjectReturn(text);
        System.out.println(n);
        sc.close();
    }
}
