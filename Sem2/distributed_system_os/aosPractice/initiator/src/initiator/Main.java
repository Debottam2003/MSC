package initiator;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {

	    public static int counter;
	public static void main(String[] args) throws FileNotFoundException {
		// System.out.println("Enter total number of nodes: ");
		File file = new File("./input.txt");
		Scanner filesc = new Scanner(file);
		String data = "";
		while(filesc.hasNextLine()) {
			data += filesc.nextLine();
		}
		String[] dataArr = data.split(",");
		System.out.println(data);
		Scanner sc = new Scanner(System.in);
		// int n = sc.nextInt();
		int n = Integer.parseInt(dataArr[0]);
		int[][] graph = new int[n][n];
		boolean[] visited = new boolean[n];
		// System.out.println("Enter total no of edges: ");
		// int e = sc.nextInt();
		int e = Integer.parseInt(dataArr[1]);
//		for(int i = 0; i < e; i++) {
//			System.out.println("Enter the end vertices of edge: " + i);
//			int u = sc.nextInt();
//			int v = sc.nextInt();
//			graph[u][v] = 1;
//		}
		int u, v;
		for(int i = 2; i < dataArr.length; i++) {
			String[] arr = dataArr[i].split(" ");
			u = Integer.parseInt(arr[0]);
			v = Integer.parseInt(arr[1]);
			graph[u][v] = 1;
		}
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
			System.out.print(graph[i][j]);
			}
			System.out.println();
		}
		for(int i = 0; i < n; i++) {
			for(int index = 0; index < visited.length; index++) {
				visited[index] = false;
			}
			counter = 0;
			dfs(i, visited, graph);
			System.out.println();
			System.out.println("Reachable nodes: " + counter);
		}
		sc.close();
	}
	public static void dfs(int start, boolean[] visited, int[][] graph) {
			if(visited[start] == true) {
				return;
			} else {
				visited[start] = true;
				System.out.print(start + " -> ");
				counter++;
				for(int i = 0; i < visited.length; i++) {
					if(visited[i] == false && graph[start][i] == 1) {
						dfs(i, visited, graph);
					}
				}
			}
	}	

}
