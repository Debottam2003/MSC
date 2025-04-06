public class Animal {
    String type;
    int age;
    Animal(){
    System.out.println("hi animal");
    }
    Animal(String type,int age){
          this();
          this.type = type;
          this.age = age; 
    }
    public void bark(){
        
    }
    public void eat(){
        System.out.println("Animal is eating");
    }
}
