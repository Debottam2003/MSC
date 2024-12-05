public class Mt extends Thread {
    String tag;

    Mt(String tag) {
        this.tag = tag;
    }

    @Override
    public void run() {
        int i = 1;
        while (i < 10) {
            System.out.println(this.tag + "thread 1...");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i++;
        }
    }
}
