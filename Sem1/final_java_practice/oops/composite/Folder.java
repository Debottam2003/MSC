package composite;

import java.util.ArrayList;

public class Folder implements Composite{
    public String name;
    public Folder(String name){
        this.name = name;
    }
    ArrayList<Composite> dist = new ArrayList<>();
    @Override
    public void operation() {
        System.out.println("This is the " + this.name + "folder");
    }
    void add(Composite c){
        this.dist.add(c);
    }
    void remove(Composite c){
        this.dist.remove(c);
    }
    void printlist(){
        if(this.name != "Root"){
        System.out.println("  " + this.name + "/");
        }
        else{
            System.out.println(this.name + "/");
        }
        for(Composite item : this.dist){
            if(item instanceof Folder){
                ((Folder)item).printlist();
            }
            else{
            System.out.println(" --" + item.getName());
            }
        }
    }
    @Override
    public String getName() {
        return this.name;
    }
}
