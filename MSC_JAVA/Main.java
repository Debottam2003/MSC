public class Main {
    public static void main(String args[]){
    Animal animal = new Animal("human",40);
    animal.eat();
    System.out.println(animal.type);
    System.out.println(animal.age);
    Dog dog = new Dog("tom",5,"Dog");
    dog.bark();
    dog.eat();
    System.out.println(dog.name);
    System.out.println(dog.age);
    System.out.println(dog.type);
    }
}
