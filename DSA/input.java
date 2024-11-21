import java.util.Arrays;
import java.util.Scanner;
public class input {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter numbers:");
        n = sc.nextInt();
        n = sc.nextInt();
        System.out.println(n+n);
        sc.close();
        int arr[] = {7,8,9,5,2,3};
        System.out.println(arr[0]);
        Arrays.sort(arr);
        System.out.println(arr[0]);
    }    
}
