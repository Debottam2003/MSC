import javax.swing.JOptionPane;

public class ObserverB implements Observers {
    public String name;

    public ObserverB(String name) {
        this.name = name;
    }

    @Override
    public void update(int a, int b) {
        JOptionPane.showMessageDialog(null, a + b);
        System.out.println(a * b);
    }

    @Override
    public String getName() {
        return this.name;
    }

}
