import javax.swing.JOptionPane;

public class ObserverA implements Observers {
    public String name;

    public ObserverA(String name) {
        this.name = name;
    }

    @Override
    public void update(int a, int b) {
        JOptionPane.showMessageDialog(null, a + b);
        System.out.println(a + b);
    }

    @Override
    public String getName() {
        return this.name;
    }
}
