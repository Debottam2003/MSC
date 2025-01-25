public class Father{
    String name;
    public Father(String name){
        this.name = name;
    }
    public void run(){
        System.out.println("Parent is running");
    }
    public String toString(){
        return name;
    }
}