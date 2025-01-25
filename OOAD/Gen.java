public class Gen<T> {
    T obj;
    public Gen(T obj){
        this.obj = obj;
        //System.out.println(obj);
    }
    public void run(){
        System.out.println("Running...");
    }

    public String toString(){
        return obj + "";
    }
}
