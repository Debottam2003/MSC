package method_chaning;

public class Chain {
    private String name;
    private int age;
    public Chain setName(String name) {
        this.name = name;
        return this;
    }
    public Chain setAge(int age) {
        this.age = age;
        return this;
    }
    public void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}
