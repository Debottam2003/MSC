import java.util.ArrayList;

public class Subject {
    public ArrayList<Observers> obs = new ArrayList<>();

    public void notifyall(int a, int b) {
        for (Observers o : obs) {
            System.out.println(o.getName());
            o.update(a, b);
        }
    }
}
