//Generalization is the process of identifying commonalities 
//among different classes and extracting them into a superclass.
//It's a top-down approach where we abstract out common behaviors and attributes,
//creating a more general entity that can be shared.
//Example: if you have classes like Car, Bike, Truck, you might
//extract common attributes and generalized class that Car, Bike, and Truck
//inherit from.
class Vehicle {
    double speed;
    int no_of_wheels;
    String color;

    void move() {
        System.out.println("Vehicle is moving");
    }

    void stop() {
        System.out.println("Vehicle is stopped");
    }
}

class Car extends Vehicle {
    String name;

    Car(String name, double speed, int no_of_wheels, String color) {
        this.name = name;
        this.speed = speed;
        this.no_of_wheels = no_of_wheels;
        this.color = color;
    }

    void stats() {
        System.out.println("Name: " + name);
        System.out.println("Speed: " + speed + " km/s");
        System.out.println("No of wheels: " + no_of_wheels);
        System.out.println("Color: " + color);
    }
}

class Bike extends Vehicle {
    String name;

    Bike(String name, double speed, int no_of_wheels, String color) {
        this.name = name;
        this.speed = speed;
        this.no_of_wheels = no_of_wheels;
        this.color = color;
    }

    void stats() {
        System.out.println("Name: " + name);
        System.out.println("Speed: " + speed + " km/s");
        System.out.println("No of wheels: " + no_of_wheels);
        System.out.println("Color: " + color);
    }
}

class Truck extends Vehicle {
    String name;

    Truck(String name, double speed, int no_of_wheels, String color) {
        this.name = name;
        this.speed = speed;
        this.no_of_wheels = no_of_wheels;
        this.color = color;
    }

    void stats() {
        System.out.println("Name: " + name);
        System.out.println("Speed: " + speed + " km/s");
        System.out.println("No of wheels: " + no_of_wheels);
        System.out.println("Color: " + color);
    }
}

public class Generalization {
    public static void main(String args[]) {
        Car car1 = new Car("BMW", 200, 4, "white");
        car1.stats();
        car1.move();
        car1.stop();
        Bike bike1 = new Bike("Kawasaki", 250, 2, "mat_balck");
        bike1.stats();
        bike1.move();
        bike1.stop();
        Truck truck1 = new Truck("Tata", 150, 8, "Grey");
        truck1.stats();
        truck1.move();
        truck1.stop();
    }
}
