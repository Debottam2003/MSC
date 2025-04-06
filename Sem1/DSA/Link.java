import java.util.LinkedList;
public class Link{
    public static void print(LinkedList<Integer> list){
        System.out.println(list+" Class Method");
    }
    public void print(LinkedList<Integer> list1,LinkedList<Integer> list2){
        System.out.println(list1+" Instance Method");
    }
    // public static void hi(){
    //     System.out.println("hi");
    //     hihi();
    // }
    // public static void hihi(){
    //     System.out.println("hihi");
    // }
    // public static void main(String[] args){
    //       hi();
    // }
    // private static void ask(){
    //     System.out.println("hi i am calling");
    // }
    // public static void main(String args[]){
    //     Link.ask();
    // }    
}
