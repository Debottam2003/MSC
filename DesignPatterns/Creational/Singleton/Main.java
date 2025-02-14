package DesignPatterns.Creational.Singleton;

public class Main {
    public static void main(String[] args) {
        Singleton instance = Singleton.createInstance("postgres", "loscahost", "okudera2003", 5000);
        System.out.println(instance);
    }
}
