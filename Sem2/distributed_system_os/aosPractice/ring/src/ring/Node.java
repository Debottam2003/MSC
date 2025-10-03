package ring;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Random;

public class Node implements Runnable{
	Node next;
	int pid;
	boolean hastoken;
	boolean incs;
	Queue<Node> q = new LinkedList<Node>();
	public Node(int pid, Node next) {
		this.pid = pid;
		this.next = next;
	}
	@Override
	public void run() {
		if(this.hastoken && this.incs) {
			this.entercs();
		} else {
            try {
                Thread.sleep(new Random().nextInt(9000));
                // Requests for critical section
                this.requesttoken();
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
		}
		
	}
	public void requesttoken() {
		this.next.receivetokenReq(this);
	}
	public void receivetokenReq(Node node) {
		synchronized(this) {
		System.out.println("Token request came from " + node.pid + " at " + this.pid);
		if(this.hastoken) {
			if(this.incs) {
			this.q.offer(node);
			} else {
				if(this.q.isEmpty()) {
					Queue<Node> qn = this.q;
					this.next.receivetoken(node, qn);
				}
			}
		} else {
			this.next.receivetokenReq(node);
		}
		}
	}
	public void receivetoken(Node node, Queue<Node> qn) {
		if(this == node) {
			this.q.clear();
	        for (Node n : qn) {
	            this.q.offer(n);
	         }
			this.entercs();
		} else {
			this.next.receivetoken(node, qn);
		}
	}
	public void entercs() {
		try {
			this.hastoken = this.incs =  true;
			System.out.println(this.pid + " enter cs");
			Thread.sleep(3000);
			System.out.println(this.pid + " exit cs");
			this.exitcs();
		} catch(Exception e) {
			System.out.println(e);
		}
	}
	public void exitcs() {
		this.incs = false;
		if(!this.q.isEmpty()) {
			this.hastoken = false;
			System.out.println("Queue of node " + this.pid + ": ");
           for (Node n : this.q) {
              System.out.print(n.pid + " ");
        }
        System.out.println();
		Node n = this.q.poll();
		Queue<Node> qn = new LinkedList<Node>();
        for (Node node : q) {
            qn.offer(node);
         }
        this.q.clear();
		this.next.receivetoken(n, qn);
		}
	}
}
