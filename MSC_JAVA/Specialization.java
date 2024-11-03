//Specialization is the opposite concept of Generalization.It's a 
//bottom-up approach,  where a subclass inherits methods and attributes from superclass
//but adds on more specific attributes of behaviors.
//Emaxple: Using the Vehicle example, Car might add properties like numDoors and
//behaviours/methods openTrunk() that only apply to cars, specializing
//the Vehicle class.
public class Specialization {
    public static void main(String args[]) {
        Car car2 = new Car("BMW", 200, 4, "black");
        car2.stats();
        car2.move();
        car2.stop();
        Bike bike2 = new Bike("Kawasaki", 250, 2, "green");
        bike2.stats();
        bike2.move();
        bike2.stop();
        Truck truck2 = new Truck("Tata", 150, 8, "white");
        truck2.stats();
        truck2.move();
        truck2.stop();
    }
}
