public class Parent {
    String name;
    int age;
    public Parent(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void display() {
        System.out.println("This is the Parent.");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
    public static void show(){
        System.out.println("This is the Parent class.");
    }
}