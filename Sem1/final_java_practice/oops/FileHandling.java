import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileHandling {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        try {
            File file = new File("file.txt");
            FileWriter writer = new FileWriter("file.txt", true);
            writer.write("\nThis is the new debottam this is the best debottam");
            writer.close();
            Scanner scanner = new Scanner(file);
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
                System.out.println(line);
            }
            scanner.close();
        } catch (IOException e) {
            System.out.println("An error occurred while creating the file." + e);
        }
        try{
            BufferedReader br = new BufferedReader(new FileReader("file.txt"));
            String line;
            while((line = br.readLine()) != null){
                System.out.println(line);
            }
            br.close();
        }
        catch(IOException e){
            System.out.println(e);
        } 
    }
}
