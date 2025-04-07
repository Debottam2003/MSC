// constructors 1.Default constrcutor 2. Parameterized constructor 3.Copy constructor
public class Car {
    String model;
    String color;

    public Car() {
        this.model = "BMW";
        this.color = "White";
    }

    public Car(String model, String color) {
        this.model = model;
        this.color = color;
    }

    public Car(Car c){
        this.model = c.model;
        this.color = c.color;
    }
    public String toString(){
        return "Model: " + model + " " + "Color: " + color;
    }
    public static void main(String[] args){
        Car c1 = new Car("TATA", "Black");
        Car c2 = new Car(c1);
        Car c3 = new Car();
        System.out.println("...car1..." + c1.toString());
        System.out.println("...car2..." + c2.toString());
        System.out.println("...car3..." + c3.toString());
    }
}
