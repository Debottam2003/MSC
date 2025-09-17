package aosPractice;

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Main {

	public static ArrayList<Integer> arr = new ArrayList<Integer>();
	public static ArrayList<Node> node = new ArrayList<Node>();
	public static int n;
	public static int[][] graph;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Mitchell Merrit Algorithm");
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number of nodes: ");
		Random rand = new Random();
		n = sc.nextInt();
		graph = new int[n][n];
		int i = 0;
		while(i < n) {
			int val = rand.nextInt(2 * n) + 1;
			if(!arr.contains(val)) {
				arr.add(val);
//				arr.add(val);
				node.add(new Node(i, val, val));
				i++;
			}
		}
		System.out.println(node);
		System.out.println("Enter total number of edges: ");
		int e = sc.nextInt();
		for(int index = 1; index <= e; index++) {
			System.out.println("Enter blocked pid and blocking pid: ");
			int x = sc.nextInt();
			int y = sc.nextInt();
			graph[x][y] = 1;
			addedge(x, y);
			deadlockDetection(x, y);
		}
		System.out.println(node);
		sc.close();
	}
	public static void addedge(int x, int y) {
		Node blocked = node.get(x);
		Node blocking = node.get(y);
		blocked.pub = blocked.pri = Math.max(blocked.pub, blocking.pub) + 1;
		transmit(x);
	}
	public static void transmit(int x) {
		for(int i = 0 ; i < n; i++) {
			if(graph[i][x] == 1) {
				Node blocked = node.get(i);
				Node blocking = node.get(x);
				if(blocked.pub < blocking.pub) {
					blocked.pub = blocking.pub;
					transmit(i);
				}
			}
		}
	}
	public static void deadlockDetection(int x, int y) {
        Node blocked = node.get(x);
        Node blocking = node.get(y);
        if(blocked.pub == blocked.pri && blocked.pub == blocking.pub) {
        	System.out.println("Deadlock Detected:");
        	System.out.println(node);
        	System.exit(1);
        }
        System.out.println("No Deadlock Detected.");
	}

}
