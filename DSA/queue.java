import java.util.Queue;
import java.util.LinkedList;
public class queue {
    public static void main(String[] args){
    
    Queue<Integer> q = new LinkedList<Integer>();
    System.out.println(q);
    q.offer(1);
    q.offer(3);
    System.out.println(q);
    q.poll();
    System.out.println(q);
    q.offer(2);
    System.out.println(q);
    int q1 = q.peek();
    System.out.println(q1);
    System.out.println(q);
}
}
