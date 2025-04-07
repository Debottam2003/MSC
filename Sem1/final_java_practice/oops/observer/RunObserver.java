public class RunObserver {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;
        Subject sub = new Subject();
        ObserverA obs1 = new ObserverA("debottam");
        sub.obs.add(obs1);
        ObserverB obs2 = new ObserverB("rony");
        sub.obs.add(obs2);
        sub.notifyall(a, b);

    }
}
