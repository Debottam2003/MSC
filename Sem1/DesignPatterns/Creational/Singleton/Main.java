package DesignPatterns.Creational.Singleton;

public class Main {
    public static void main(String[] args) {
        Singleton instance = Singleton.createInstance("postgres", "localhost", "okudera2003", 5000);
        System.out.println(instance);
        Singleton instance2 = Singleton.createInstance("mysql", "localhost", "ichinose", 3306);
        System.out.println(instance2);
    }
}
