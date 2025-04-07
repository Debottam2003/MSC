import javax.swing.JOptionPane;

public class UI {
    public static void main(String[] args) {
        System.out.println("Welcome to the Abstract Factory UI!");
        String[] factory = { "windows", "mac" };
        int choice = JOptionPane.showOptionDialog(
            null, 
            "Choose your factory:", 
            "Factory Selection",
            JOptionPane.DEFAULT_OPTION, 
            JOptionPane.INFORMATION_MESSAGE, 
            null, 
            factory, 
            factory[0]);
        if(choice == 0){
            int index = JOptionPane.showOptionDialog(
                null, 
                "Choose your factory:", 
                "Factory Selection",
                JOptionPane.DEFAULT_OPTION, 
                JOptionPane.INFORMATION_MESSAGE, 
                null, 
                WindowsFactory.arr, 
                WindowsFactory.arr[0]);
                UIFactory wf = new WindowsFactory();
                if(index == 0){
                Button1 btn = wf.createButton();
                btn.render();
                }
                else if(index == 1){
                    Checkbox ch = wf.createCheckbox();
                    ch.check();
                }
        }
        else if(choice == 1){
            int index = JOptionPane.showOptionDialog(
                null, 
                "Choose your factory:", 
                "Factory Selection",
                JOptionPane.DEFAULT_OPTION, 
                JOptionPane.INFORMATION_MESSAGE, 
                null, 
                MacFactory.arr, 
                MacFactory.arr[0]);
                UIFactory mf = new MacFactory();
                if(index == 0){
                Button1 btn = mf.createButton();
                btn.render();
                }
                else if(index == 1){
                    Checkbox ch = mf.createCheckbox();
                    ch.check();
                }
        }
    }
}
