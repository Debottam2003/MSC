package factory;

import java.util.Scanner;

import javax.swing.JOptionPane;

public class Frontend {
    public static void main(String[] args) {
        // System.out.println("Enter the type of the Notification (SMS or EMAIL or
        // BUZZER): ");
        // Scanner sc = new Scanner(System.in);
        // String type = sc.nextLine();
        String[] options = { "SMS", "EMAIL", "BUZZER" };
        int index = JOptionPane.showOptionDialog(
                null,
                "Choose an Option",
                "Notificatin",
                JOptionPane.DEFAULT_OPTION,
                JOptionPane.INFORMATION_MESSAGE,
                null,
                options,
                options[0]);
        Backend backend = new Backend();
        Notification notification = backend.getNotification(options[index]);
        if (notification != null) {
            notification.show();
            notification.display();
        } else {
            System.out.println("Invalid Notification Type");
        }
        // sc.close();
    }
}
