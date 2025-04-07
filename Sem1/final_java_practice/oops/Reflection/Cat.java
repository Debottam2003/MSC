package Reflection;

public class Cat {
    // Private fields for encapsulation
    private String name;
    private int age;
    private String color;

    // Public getter for name
    public String getname() {
        return name;
    }

    // Public setter for name
    public void setname(String name) {
        this.name = name;
    }

    // Public getter for age
    public int getage() {
        return age;
    }

    // Public setter for age
    public void setage(int age) {
        if (age > 0) { // Validation
            this.age = age;
        } else {
            System.out.println("Age must be positive.");
        }
    }

    // Public getter for color
    public String getcolor() {
        return color;
    }

    // Public setter for color
    public void setcolor(String color) {
        this.color = color;
    }
}