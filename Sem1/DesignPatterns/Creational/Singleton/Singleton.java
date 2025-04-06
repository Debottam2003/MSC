package DesignPatterns.Creational.Singleton;

public class Singleton {
    protected static Singleton instance = null;
    protected String user;
    protected String host;
    protected String password;
    protected int port;

    public static Singleton createInstance(String user, String host, String password, int port) {
        if (instance == null) {
            instance = new Singleton();
            instance.user = user;
            instance.host = host;
            instance.password = password;
            instance.port = port;
        }
        return instance;
    }

    public String toString() {
        return "" + instance.user + " " + instance.host + " " + instance.password + " " + instance.port;
    }
}
