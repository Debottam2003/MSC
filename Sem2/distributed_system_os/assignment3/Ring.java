package distributed_system_os.assignment3;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Ring {
    public static void main(String[] args) {
        System.out.println("Token based Ring topology");
        ArrayList<Node> nodes = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter total number of processes: ");
        int n = sc.nextInt();
        int p_hold_id = new Random().nextInt(n);
        for (int i = 0; i < n; i++) {
            if (i == p_hold_id) {
                nodes.add(new Node(i, (i + 1) % n, true));
            } else {
                nodes.add(new Node(i, (i + 1) % n, false));
            }
        }
        for (Node node : nodes) {
            new Thread(node).start();
        }
        sc.close();
    }
}
