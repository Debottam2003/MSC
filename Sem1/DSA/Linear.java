public class Linear {
       public static void main(String args[]) {
              int arr[] = { 7, 8, 9, 5, 3, 2, 10, 13 };
              int item = 81;
              Search list = new Search();
              list.perform_search(arr, item);
       }

}

class Search {
       public void perform_search(int arr[], int item) {
              int flag = 0;
              for (int i = 0; i < arr.length; i++) {
                     if(arr[i] == item) {
                            flag = 1;
                     break;
                     }
              }
              if(flag == 1){
                     System.out.println("Item found.");
              }
              else{
                     System.out.println("Item not found.");
              }
       }
}
