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
    public static void add(Node l1, Node l2){
           Node a = l1.head;
           Node b = l2.head;
           Node temp = new Node();
           while(a != null && b != null){
            if(temp.head == null){
                Node c = new Node(a.data + b.data,null);
                temp.head = c;
            }
            else{
                Node prev = temp.head;
                while(prev.next != null){
                    prev = prev.next;
                }
                Node c = new Node(a.data + b.data,null);
                prev.next = c;
            }
            a = a.next;
            b = b.next;
           }
           temp.display();
    }
}
