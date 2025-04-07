package composite;

public class File implements Composite{
    public String name;
    public File(String name){
        this.name = name;
    }
    @Override
    public void operation() {
        System.out.println("This is the " + this.name + "folder");
    }
    @Override
    public String getName() {
        return this.name;
    }
    
}
