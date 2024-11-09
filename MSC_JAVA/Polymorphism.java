import java.util.Scanner;

public class Polymorphism {
    public static void main(String args[]){
        Polymorphism poly = new Polymorphism();
           poly.run();
        }
        public void run(){
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter no of elements: ");
            int n = sc.nextInt();
            Animal[] animal = new Animal[n];
            Dog dog = new Dog("Tom", 5, "Dog");
            Puppy cat = new Puppy("Golla", 4, "Cat", true);
            animal[0] = dog;
            animal[1] = cat;
            for(int i = 0;i < 2; i++){
             animal[i].eat();
             animal[i].bark();
            }
            sc.close();
        }
    }
