package Sem1.MSC_JAVA.Mutual_Exclusion;

public class Main {
    public static void main(String[] args) {
        Account acc = new Account();
        Thread one = new Thread(() -> {
            for(int i = 0; i < 500; i++) {
                acc.deposit(10);
            }
        });
        Thread two = new Thread(() -> {
            for(int i = 0; i < 500; i++) {
                acc.withdraw(10);
            }
        });
        one.start();
        two.start();

        try {
            one.join();
            two.join();
            acc.getBalance();
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }
}
