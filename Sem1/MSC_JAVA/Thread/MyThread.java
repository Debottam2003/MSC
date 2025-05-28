public class MyThread {
    public static void main(String[] args) throws InterruptedException {
        // for (int i = 1; i <= 10; i++) {
        //     System.out.println(i);
        //     Thread.sleep(5000);
        // }
        Mt t1 = new Mt("tag 1");
        t1.start();
        Mt2 t2 = new Mt2();
        Thread t = new Thread(t2);
        t.start();
        Mt t3 = new Mt("tag 2");
        // t1.join();
        // System.out.println("T1 thread has completed...");
        t3.start();
        t3.join();
        System.out.println("Thread count: " + Thread.activeCount());
    }
}
