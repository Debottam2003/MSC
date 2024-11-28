public class Main {
    public static void main(String args[]){
    // Animal animal = new Animal("human",40);
    // animal.eat();
    // System.out.println(animal.type);
    // System.out.println(animal.age);
    // Dog dog = new Dog("tom",5,"Dog");
    // dog.bark();
    // dog.eat();
    // System.out.println(dog.name);
    // System.out.println(dog.age);
    // System.out.println(dog.type);
    // Puppy pup = new Puppy("Tom's baby",1,"Dog",true);
    // System.out.println(pup.name);
    // System.out.println(pup.age);
    // System.out.println(pup.type);
    // System.out.println(pup.vaccine);
    Animal[] animal = new Animal[2];
    Animal animal1 = new Dog(null, 0, null);
    animal1.eat();
    animal[0] = animal1;
    Animal animal2 = new Puppy(null, 0, null,false);
    animal2.eat();
    animal[1] = animal2;
    animal[0].eat();
    animal[1].eat();
    Animal a = new Dog(null, 0, null);
    a.eat();
    Dog dog1 = (Dog)a;
    dog1.eat();
    }
}
