package ring;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static ArrayList<Node> nodes = new ArrayList<>();
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Ring Topology");
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter total no of nodes: ");
		int n = sc.nextInt();
		for(int i = 0; i < n; i++) {
			nodes.add(new Node(i, null));
		}
		for(int i = 0; i < n; i++) {
			nodes.get(i).next = nodes.get((i + 1) % n);
		}
		System.out.println("Nodes are created.");
		nodes.get(0).hastoken = true;
		nodes.get(0).incs = true;
		for(int i = 0; i < n; i++) {
			System.out.println(nodes.get(i).next.pid);
		}
		for(Node node : nodes) {
			new Thread(node).start();
		}
	}

}
