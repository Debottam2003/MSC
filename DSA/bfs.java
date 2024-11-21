import java.util.LinkedList;
import java.util.Queue;

public class bfs{
    public static void main(String args[]){
        int graph[][] = {
                        {0,1,1,0,0,0,0},
                        {1,1,0,1,1,0,0}, 
                        {0,0,0,0,0,1,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,1},
                        {0,0,0,0,0,0,0}
                        };
        bfs.print(graph);
        boolean visited[] = {false,false,false,false,false,false,false};
        Queue<Integer> queue = new LinkedList<>();
        int src = 0;
        visited[src] = true;
        queue.offer(src);
        while (queue.size() != 0) {
            int p = queue.poll();
            System.out.print(p+"->"); 
             for(int i=0;i<graph.length;i++){
                if(graph[p][i] == 1 && visited[i] == false){
                    queue.offer(i);
                    visited[i] = true;
                }
             }
        }
        System.out.println("Null");
    }
    private static void print(int graph[][]){
        for(int i=0 ;i<graph.length;i++){
            for(int j=0;j<graph.length;j++){
               System.out.print(graph[i][j]+" ");
            }
            System.out.println();
        }
}
}
