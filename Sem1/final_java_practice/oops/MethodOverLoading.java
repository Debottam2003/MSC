// Method Overloading in Java
// Method overloading is a feature that allows a class to have more than one method with the same name, as long
// as the function signatures are different. 
// Different signature can be achived by changing 1.the number of parameters, 2.the type of parameters, 3.the order of 
// parameters.
// Method overloading is a compile-time polymorphism.
public class MethodOverLoading {
    public void add(int a, int b) {
        System.out.println("adding two integers: " + (a + b));
    }

    public void add(int a, int b, int c) {
        System.out.println("adding two integers: " + (a + b + c));
    }

    public void add(double a, int b) {
        System.out.println("adding two integers: " + (a + b));
    }

    public void add(int b, double a) {
        System.out.println("adding two integers: " + (a + b));
    }

    public static void main(String[] args) {
        System.out.println("Method Overloading");
        MethodOverLoading obj = new MethodOverLoading();
        obj.add(10, 20);
        obj.add(1, 2, 3);
        obj.add(2, 3.5);
        obj.add(1.1, 5);
    }
}
