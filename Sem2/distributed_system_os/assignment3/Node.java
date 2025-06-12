package distributed_system_os.assignment3;

import java.util.LinkedList;
import java.util.Queue;

public class Node implements Runnable {
    Integer p_id;
    Queue<Integer> p_queue = new LinkedList<>();
    boolean p_hold;
    Integer next_hop;

    public Node(Integer p_id, Integer next_hop, boolean p_hold) {
        this.p_id = p_id;
        this.next_hop = next_hop;
        this.p_hold = p_hold;
    }

    @Override
    public void run() {
        System.out.println("process_id: " + this.p_id + " next hop: " + this.next_hop + " p_hold: " + this.p_hold);
    }

    public void requestCS() {

    }

    public void modifyQueue() {

    }

    public void enterCS() {
        try {
            Thread.sleep(2000);
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    public void exitCS() {
        
    }
}
