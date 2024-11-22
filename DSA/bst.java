public class bst {
    public static class Node{
        int data;
        Node left;
        Node right;
        public Node(int data){
               this.data = data;
        }
        public static Node insert(Node root,int val){
            if(root == null){
               root = new Node(val);
               return root;
            }
            else if(root.data > val){
                root.left = insert(root.left, val);
            }
            else{
                root.right = insert(root.right, val);
            }
            return root;
        }
    public static void inorder(Node root){
        if(root == null){
            return;
        }
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    public static boolean search(Node root,int i){
             if(root == null){
                return false;
             }
             else if(root.data == i){
                return true;
             }
             else if(root.data > i){
                return search(root.left, i);
             }
             else{
                return search(root.right, i);
             }
    }
    public static void main(String args[]){
        int arr[] = {7,8,9,5,2,3,1,10,13};
        Node root = null;
        for(int i=0;i<arr.length;i++){
            root = insert(root,arr[i]);
        }
        inorder(root);
        boolean b = search(root,3);
        System.out.println();
        System.out.println(b);
    }
}
}
