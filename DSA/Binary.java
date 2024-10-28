public class Binary {
    public static void main(String args[]) {
        int array[] = { 2, 3, 5, 7, 8, 9, 10, 13 };
        int item = 9;
        int first = 0;
        int last = array.length - 1;
        int flag = 0;
        while (first <= last) {
            int mid = (first + last) / 2;
            System.out.println(mid);
            if (array[mid] == item) {
                flag = 1;
                break;
            } else if (item > array[mid]) {
                first = mid + 1;
            } else {
                last = mid - 1;
            }
        }
        if (flag == 0) {
            System.out.println("Item not found");
        } else {
            System.out.println("Item found");
        }
    }
}