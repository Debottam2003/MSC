import java.util.ArrayList;

import javax.swing.JOptionPane;

public class Array {
    public static void main(String[] args) {
        // String text = "My name is Debottam Kar";
        // String[] arr = text.split(" ");
        // ArrayList<String> list = new ArrayList<>();
        // for (int i = 0; i < arr.length; i++) {
        // System.out.println(arr[i]);
        // list.add(arr[i]);
        // }
        // System.out.println(list);
        // String[] message = { "My", "name", "is", "Debottam", "Kar" };
        // String array_to_string = String.join(" ", message);
        // System.out.println(array_to_string);
        // list.add("my");
        // list.add("name");
        // System.out.println(list);
        // list.remove("my");
        // System.out.println(list);
        // JOptionPane.showMessageDialog(null, "debottam");
        // String name = JOptionPane.showInputDialog("Enter your name");
        // System.out.println(name);
        // int arr[] = new int[5];
        // for(int i = 0; i < 5; i++){
        // arr[i] = Integer.parseInt(JOptionPane.showInputDialog("Enter the Array
        // element " + (i + 1) + " : " ));
        // }
        // for(int i = 0; i < 5; i++){
        // System.out.println(arr[i]);
        // }
        // int choice = JOptionPane.showConfirmDialog(null, "Are You Sure",
        // "Confirmation", JOptionPane.YES_NO_OPTION);
        // if(choice == JOptionPane.YES_OPTION){
        // System.out.println("Confirmed Yes");
        // }
        // else{
        // System.out.println("Confirmed No");
        // }
        Object[] options = { "SMS", "EMAIL", "BUZZER" };
        int selected = JOptionPane.showOptionDialog(
            null,
            "Choose an Option",
            "Notification",
            JOptionPane.DEFAULT_OPTION,
            JOptionPane.INFORMATION_MESSAGE,
            null,
            options,
            options[0]
        );
        System.out.println("User selected Notification type is: " + options[selected]);

    }
}
