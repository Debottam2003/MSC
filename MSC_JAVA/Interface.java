// abstract class Parent {

//     String name;

//     Parent(String name) {
//         this.name = name;
//     }

//     abstract void sound();

//     void eat() {
//         System.out.println("I am eating.");
//     }
// }

// class Child extends Parent {

//     Child(String name) {
//         super(name);
//     }

//     void sound() {
//         System.out.println("I am crying.");
//     }
// }

// public class Interface {
//     public static void main(String args[]) {

//         Child baby1 = new Child("Tom");
//         System.out.println(baby1.name);
//         baby1.eat();
//         baby1.sound();

//     }
// }

interface Parent1 {

    void sound();

    default void eat() {
        System.out.println("I am eating.");
    }
}

interface Parent2 {

    default void sleep() {
        System.out.println("I am sleeping.");
    }
}

class Child implements Parent1, Parent2 {
    String name;

    Child(String name) {
        this.name = name;
    }

    public void sound() {
        System.out.println("I am crying.");
    }
}

public class Interface {
    public static void main(String args[]) {

        Child baby1 = new Child("Tom");
        System.out.println(baby1.name);
        baby1.eat();
        baby1.sound();
        baby1.sleep();

    }
}
