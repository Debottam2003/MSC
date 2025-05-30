package Sem1.MSC_JAVA.Mutual_Exclusion;

public class Account {
    int balance = 0;

    public void withdraw(int ammount) {
        synchronized(this){
        this.balance -= ammount;
        }
    }

    public void deposit(int ammount) {
        synchronized(this) {
        this.balance += ammount;
        }
    }

    public void getBalance() {
        System.out.println("Your account balance is: " + this.balance);
    }
}
