package oops.Thread;

public class Thread1 extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("this is the thread1.");
            RunThread.tiffin.add(i);
            // System.out.println(RunThread.tiffin);
            try {
            Thread.sleep(2000);
            } catch (InterruptedException e) {
            e.printStackTrace();
            }
        }
    }
}