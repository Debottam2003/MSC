public class Son extends Father{
    public Son(String name){
        super(name);
        super.run();
        run();
    }
    @Override
    public void run(){
        System.out.println("Child is running");
    }
    public String toString(){
        return name;
    }
}
