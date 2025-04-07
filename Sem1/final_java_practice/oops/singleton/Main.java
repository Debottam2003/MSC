public class Main {
    public static void main(String[] args) {
        Singleton singleton = Singleton.getInstance();
        System.out.println("Name: " + singleton.getName() + "\n" + "Age: " + singleton.getAge());
        System.out.println(Integer.parseInt("2003"));
    }
}