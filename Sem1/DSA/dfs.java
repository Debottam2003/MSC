public class dfs {
    public static void main(String args[]){
        int graph[][] = {
                        {0,1,1,0,0,0,0},
                        {0,0,0,1,1,0,0}, 
                        {0,0,0,0,0,1,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,1},
                        {0,0,0,0,0,0,0}
                        };
        dfs.print(graph);
        // boolean visited[] = new boolean[graph.length];
        boolean visited[] = {false,false,false,false,false,false,false};
        dfs.work(0,visited,graph);
    }
    private static void print(int graph[][]){
        for(int i=0 ;i<graph.length;i++){
            for(int j=0;j<graph.length;j++){
               System.out.print(graph[i][j]+" ");
            }
            System.out.println();
        }
    }
    private static void work(int src,boolean visited[],int graph[][]) {
            if (visited[src] == true){
               return;
            }
            else{
                visited[src] = true;
                System.out.println(src+" visited");
            }
            for(int i=0;i<graph[src].length;i++){
                if(graph[src][i] == 1){
                   work(i,visited,graph);
                }
            }
            return;         
    }
}
