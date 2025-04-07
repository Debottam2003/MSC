package builder;

public class Calling {
    public static void main(String[] args) {
    Build obj = new Build.Builder()
            .setUsername("Debottam Kar")
            .setPassword("okudera2003")
            .objectBuild();
    System.out.println(obj);
    }
}
