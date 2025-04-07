package oops.Thread;

public class Thread2 extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("this is the thread2.");
            RunThread.tiffin.add(i * i);
            // System.out.println(RunThread.tiffin);
            try {
            Thread.sleep(2000);
            } catch (InterruptedException e) {
            e.printStackTrace();
            }
        }
    }
}
