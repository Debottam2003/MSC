import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;

public class Main {

    public static HashSet<Integer> s = new HashSet<>();
    public static ArrayList<Integer> arr = new ArrayList<>();
    public static ArrayList<Node> nodesList = new ArrayList<>();
    public static Main main = new Main();

    public static void main(String[] args) {
        System.out.println("Mitchell Merritt DDD algorithm");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter total no of nodes: ");
        int n = sc.nextInt();

        Random rand = new Random();

        int i = 0;
        while (true) {
            int j = rand.nextInt(2 * n) + 1;
            if (!s.contains(j)) {
                s.add(j);
                arr.add(j);
                System.out.println("Process " + i + " is created with ID: " + i + ", Public: " + j + " Private: " + j);
                nodesList.add(new Node(i, j));
                i++;
            }
            if (i == n) {
                break;
            }
        }

        System.out.println("All nodes created successfully.");
        System.out.println("Enter the total no of edges: ");
        int e = sc.nextInt();
        for (int index = 0; index < e; index++) {
            System.out.println("Enter the blocked process's id and blocking process's id accordingly : " + " id <= " + (n - 1));
            int x = sc.nextInt();
            int y = sc.nextInt();
            main.addEdge(nodesList.get(x), nodesList.get(y));
        }
        sc.close();
    }

    public void addEdge(Node n, Node m) {
        // n is the blocked process
        // m is the blocking process
        System.out.println("Process " + n.pid + " " + "Public: " + n.u + " Private: " + n.v);
        System.out.println("Process " + m.pid + " " + "Public: " + m.u + " Private: " + m.v);
        n.u = n.v = Math.max(n.u, m.u) + 1;
        System.out.println("Process " + n.pid + " is the blocked process so the public and private value become: "
                + "Public: " + n.u + " Private: " + n.v);
        n.forwardedge = m;
        m.backwardedge = n;
        transmit(n);
        deadlockDetection(n);

    }

    public void transmit(Node n) {
        while (true) {
            if (n.backwardedge != null && n.backwardedge.u < n.u) {
                System.out.println("Blocked process Process " + n.backwardedge.pid + " has public value lesser than "
                        + " blocking process Process" + n.pid
                        + " so public value is transmitted in the reverse direction of the edge");
                n.backwardedge.u = n.u;
                System.out.println("After transmission Process " + n.backwardedge.pid + " has Public value: "
                        + n.backwardedge.u + " and Private value: " + n.backwardedge.v);
                n = n.backwardedge;
                transmit(n);
            } else {
                return;
            }
        }
    }

    public void deadlockDetection(Node n) {
        if (n.forwardedge.u == n.u && n.u == n.v) {
            System.out.println("Blocked process Process " + n.pid + " has public value equal to private value "
                    + "Public: " + n.u + " Private: " + n.v + " and "
                    + "blocking process" + n.forwardedge.pid
                    + " public value is same with blocked process" + n.pid + " public value and"
                    + " Public: " + n.forwardedge.u
                    + " Private: " + n.forwardedge.v);
            System.out.println("Deadlock detected");
            System.exit(1);
        } else {
            System.out.println("No Deadlock Detected");
        }
    }
}