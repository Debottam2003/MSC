public class Mt2 extends Thread {
    @Override
    public void run() {
        while (true) {
            System.out.println("thread 2...");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
