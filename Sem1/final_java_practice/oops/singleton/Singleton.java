public class Singleton {
    private String name = "";
    private int age = 0;
    private static Singleton instance = null;
    private Singleton(){
        this.name = "Debottam Kar";
        this.age = 22;
    }
    // private static Singleton instance = new Singleton();// Eager Initialiation 
    public static Singleton getInstance(){
        if(instance == null){
            instance = new Singleton();// Lazy Initialization
        }
        return instance;
    }
    public String getName(){
        return instance.name;
    }
    public String getAge() {
        return String.valueOf(instance.age);
    }
    
}
