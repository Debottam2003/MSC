public class Linked_list{
    public static void main(String[] args) {
    Node l1 = new Node();
    l1.createnode(10);
    l1.createnode(20);
    l1.createnode(40);
    l1.createnode(30);
    //Node l2 = new Node();
    //l1.display();
    //l1.scale(3);
    Node l2 = new Node();
    l2.createnode(15);
    l2.createnode(25);
    l2.createnode(11);
    l2.createnode(11);
    //l2.display();
    //l2.scale(4);
    l1.display();
    l2.display();
    Node.add(l1, l2);
    Node.sub(l1, l2);
    Node.multiply(l1, l2);
    }
}
