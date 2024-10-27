public class Dog extends Animal {
    String name;
    Dog(String name,int age,String type){
       super(type,age);
       this.name = name;
    }
    public void bark() {
        System.out.println("The dog is barking");
        eat();
    }
}
