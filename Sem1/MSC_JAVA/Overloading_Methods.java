//Method Overloading function name is same but the function  signature is different = (function name + no of argument / type of arguments)
public class Overloading_Methods {
    public static void main(String args[]) {
        Overloading_Methods func = new Overloading_Methods();
        func.function(10, 5);
        func.function(10, 5, 20);
        func.function(10.5, 5.6);
    }

    public void function(int a, int b) {
        System.out.println(a + b);
    }

    public void function(int a, int b, int c) {
        System.out.println(a + b + c);
    }

    public void function(double a, double b) {
        System.out.println(a + b);
    }
}
