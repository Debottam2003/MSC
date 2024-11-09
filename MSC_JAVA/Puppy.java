public class Puppy extends Dog{
    boolean vaccine;
    Puppy(String name,int age,String type,boolean vaccine){
        super(name, age, type); 
        this.vaccine = vaccine;
    }
    public void eat(){
        System.out.println("Puppy is eating");
    }
    public void bark() {
        System.out.println("The puppy is barking");
        eat();
        super.eat();
    }
}
