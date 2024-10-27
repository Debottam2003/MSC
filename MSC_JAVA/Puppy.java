public class Puppy extends Dog{
    boolean vaccine;
    Puppy(String name,int age,String type,boolean vaccine){
        super(name, age, type); 
        this.vaccine = vaccine;
    }
}
