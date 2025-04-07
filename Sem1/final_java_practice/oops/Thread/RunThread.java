package oops.Thread;

import java.util.ArrayList;

public class RunThread {
    public static ArrayList<Integer> tiffin = new ArrayList<>();

    public static void main(String[] args) {
        System.out.println("Main thread is running...");
        Thread1 th1 = new Thread1();
        th1.start();
        Thread2 th2 = new Thread2();
        th2.start();
    }
}