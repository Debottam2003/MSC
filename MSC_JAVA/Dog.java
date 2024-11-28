public class Dog extends Animal {
    String name;
    Dog(String name,int age,String type){
       super(type,age);
       this.name = name;
    }
    @Override
    public void eat(){
        System.out.println("Dog is eating");
    }
    @Override
    public void bark() {
        System.out.println("The dog is barking");
        eat();
        super.eat();
    }
}
