// Multilevel Inheritance Example
public class Grandchild extends Child {
    public Grandchild(String name, int age, double cgpa) {
        super(name, age, cgpa);
    }
    public void display() {
        System.out.println("Grandchild display method");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("CGPA: " + cgpa);
    }
}