package Sem2.distributed_system_os;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static int counter;

    public static void dfs(int start, int[][] graph, boolean[] visited) {
        if (visited[start] == true) {
            return;
        }
        visited[start] = true;
        counter++;
        System.out.print(start + "->");
        for (int i = 0; i < visited.length; i++) {
            if (visited[i] == false && graph[start][i] == 1) {
                dfs(i, graph, visited);
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("Hello, World!");
        System.out.println("Enter the number of vertices in the graph: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] graph = new int[n][n];
        boolean[] visited = new boolean[n];
        for (int i = 0; i < graph.length; i++) {
            visited[i] = false;
            for (int j = 0; j < graph[i].length; j++) {
                graph[i][j] = 0;
            }
        }
        System.out.println("Enter the no of edges: ");
        int edge = sc.nextInt();
        int u, v;
        for (int i = 0; i < edge; i++) {
            System.out.println("Enter the end vertices of the edge: " + (i + 1));
            u = sc.nextInt();
            v = sc.nextInt();
            graph[u][v] = 1;
        }
        sc.close();
        for (int i = 0; i < graph.length; i++) {
            for (int j = 0; j < graph[i].length; j++) {
                System.out.print(graph[i][j] + " ");
            }
            System.out.println();
        }
        for (int i = 0; i < n; i++) {
            counter = 0;
            dfs(i, graph, visited);
            if (counter == n) {
                System.out.print("\n" + true + " " + "Every Vertex can be reached from " + i);
            }
            Arrays.fill(visited, false);
            System.out.println();
        }
    }
}