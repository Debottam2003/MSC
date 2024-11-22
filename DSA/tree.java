public class tree {
    public static void main(String args[]){
        int tree[][] = {
            {0,1,1,0,0,0,0},
            {0,0,0,1,1,0,0}, 
            {0,0,0,0,0,1,0},
            {0,0,0,0,0,0,0},
            {0,0,0,0,0,0,0},
            {0,0,0,0,0,0,1},
            {0,0,0,0,0,0,0}
            };
            for(int i=0 ;i<tree.length;i++){
                for(int j=0;j<tree.length;j++){
                   System.out.print(tree[i][j]+" ");
                }
                System.out.println();
        }
    } 
}
