import java.util.LinkedList;

public class adj_list{
    public static void main(String[] args){
        System.out.println("Debottam Kar");
        LinkedList<Integer> list = new LinkedList<>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.offerFirst(0);
        list.pollFirst();
        list.add(0,35);
        list.add(4,45);
        list.pollLast();
        list.remove(4);
        System.out.println(list+" 2nd Last remove result in main function/method");
        LinkedList<Integer> l = new LinkedList<>();
        adj_list linkedlist = new adj_list();
        l = linkedlist.delete(list);
        System.out.println(l+" Last remove result using object of the class adj_list");
        Link adj = new Link();
        Link.print(list);
        adj.print(list,list);
        System.err.println(delete(list));
        System.err.println(adj_list.delete(list));
    }
    public static LinkedList<Integer> delete(LinkedList<Integer> list){
        list.removeLast();
        return list;
    }
}