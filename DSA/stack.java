import java.util.Stack;
public class stack{
    public static void main(String[] args){
          Stack<Integer> s = new Stack<Integer>();
          System.out.println(s);
          s.push(1); 
          s.push(3);
          int s1 = s.peek(); // Top of the stack
          System.out.println(s1);
          s.pop();
          System.out.println(s);
          s.peek();
          System.out.println(s);
    }
}