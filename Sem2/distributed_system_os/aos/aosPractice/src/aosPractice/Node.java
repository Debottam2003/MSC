package aosPractice;

public class Node {
	int pid;
	int pub;
	int pri;
	public Node(int pid, int pub, int pri) {
		this.pid = pid;
		this.pub = pub;
		this.pri = pri;
	}
	public String toString() {
		return this.pid + ":" + this.pub + ":" + this.pri;
	}
}
