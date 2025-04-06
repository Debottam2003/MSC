class Account {

    private String ownername;
    private double balance;

    Account(String ownername, double balance) {
        this.ownername = ownername;
        this.balance = balance;
    }

    public void show_user() {
        System.out.println("User_Name:" + this.ownername);
    }

    public void show_balance() {
        System.out.println("Balance: " + this.balance);
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            show_balance();
        }
    }

    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            show_balance();
        } else {
            System.out.println("Insufficient balance.");
        }
    }

}

public class Encapsulation {
    public static void main(String args[]) {

        Account user1 = new Account("Debottam", 2000);
        user1.show_user();
        user1.show_balance();
        user1.deposit(500.00);
        user1.withdraw(700);

        Account user2 = new Account("Sritama", 12000);
        user2.show_user();
        user2.show_balance();
        user2.deposit(1500.00);
        user2.withdraw(3000);

    }
}
