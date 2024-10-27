public class Variables {
       public static void main(String[] args) {
              // Primitive data types
              byte byteData = 12;
              short shortData = 120;
              int intData = 1200;
              long longData = 12000;
              float floatData = 12.0f;
              double doubleData = 120.1200;
              char charData = 'd';
              boolean booleanData = true;

              // Print the values
              System.out.println("Byte: " + byteData);
              System.out.println("Short: " + shortData);
              System.out.println("Int: " + intData);
              System.out.println("Long: " + longData);
              System.out.println("Float: " + floatData);
              System.out.println("Double: " + doubleData);
              System.out.println("Char: " + charData);
              System.out.println("Boolean: " + booleanData);

              String name = "debottam kar";
              System.out.println("String: " + name);

              int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
              for (int i = 0; i < array.length; i++) {
                     System.out.print(" " + array[i]);
              }

              Variables user = new Variables();
              user.run();
              double marks = user.marks();
              System.out.println(marks);

       }
       public void run(){
              System.out.println("\n Debottam is running.");
       }
       public double marks(){
              return 8.345;
       }
}
