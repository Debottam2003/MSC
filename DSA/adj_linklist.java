import java.util.LinkedList;
import java.util.Scanner;
public class adj_linklist {
       public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of vertices:");
        int v = sc.nextInt();
        LinkedList<Integer> arr[] = new LinkedList[v];
        for (int i = 0; i < v; i++) {
            arr[i] = new LinkedList<>();
            // arr[i].add(i);
        }
        // arr[0].add(0);
        // arr[0].add(1);
        // arr[1].add(2);
        // arr[2].add(0);
        // arr[2].add(1);
        // arr[2].add(2);
        for(int i=0;i<v;i++){
            System.out.println("Enter the no of edges from vertex "+i);
            int n = sc.nextInt();
            for(int j=0;j<n;j++){
                System.out.println("Enter the vertex");
                int m = sc.nextInt();
                arr[i].add(m);
            }
        }
        for (int i = 0; i < v; i++) {
            System.out.println(i+"->"+arr[i]+"->Null");
        }
        sc.close();
    }
       
}
