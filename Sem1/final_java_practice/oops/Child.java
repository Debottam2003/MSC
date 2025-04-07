public class Child extends Parent {
    double cgpa;
    public Child(String name, int age, double cgpa) {
        super(name, age); // Call the constructor of the Parent class
        this.cgpa = cgpa;
    }
    /**
     * @author Debottam Kar
     */
    @Override
    public void display() {
        System.out.println("This is the Child.");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("CGPA: " + cgpa);
    }
    public static void show() {
        System.out.println("This is the Child class.");
    }
}
