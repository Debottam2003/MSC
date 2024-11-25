public class Node {
    Node head;
    int data;
    Node next;
    Node(){
    this.head = null;
    }
    Node(int data, Node next){
        this.data = data;
        this.next = next;
    }
    public void createnode(int data){
        if(this.head == null){
            Node newnode = new Node(data,null);
            this.head = newnode;
        }
        else{
            Node prev = this.head;
            while(prev.next != null){
                prev = prev.next;
            }
            Node newnode = new Node(data,null);
            prev.next = newnode;
        }
    }
    public void display(){
        Node temp = this.head;
        while(temp != null){
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("Null");
    }
    public void scale(int s){
        Node temp = this.head;
        while(temp != null){
            temp.data *= s; 
            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("Null");
    }
}
