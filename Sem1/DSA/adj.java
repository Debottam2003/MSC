import java.util.*;
public class adj {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no of vertices:");
        int v = sc.nextInt();
        System.out.println("Enter the no of edges:");
        int e = sc.nextInt();
        int arr[][] = new int[v][v];
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                arr[i][j] = 0;
            }
        }
        int j,k;
        for(int i=0;i<e;i++){
            System.out.println("Enter vertices of edge: "+(i+1));
            j = sc.nextInt();
            k = sc.nextInt();
            arr[j][k] = arr[k][j] = 1;
        }
        sc.close();
    for(int m=0;m<v;m++){
        for(int n=0;n<v;n++){
            System.out.print(" "+arr[m][n]);
        }
        System.out.println();
    }
  }
}
