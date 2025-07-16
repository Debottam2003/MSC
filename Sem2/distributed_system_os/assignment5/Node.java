package Sem2.distributed_system_os.assignment5;

public class Node implements Runnable {
    public int id;
    public String state;
    public int clock;
    public boolean snapshot_started = false;
    public int total_nodes;
    public int[][] graph;

    public Node(int id, int n, int[][] graph) {
        this.id = id;
        this.total_nodes = n;
        this.graph = graph;
    }

    @Override
    public void run() {
        System.out.println("Process " + this.id + " is started");
    }

    public void receiveMessage(Message msg) {
        synchronized (this) {
            if (msg.is_marker && !this.snapshot_started) {

                System.out.println("Marker message received by Process " + this.id +
                        " on channel " + msg.sender_id + "_" + msg.receiver_id
                        + " and it is the first marker message received in this node");

                this.clock = (int) (Math.random() * 5 + 1);
                this.state = "Local state is stored and clock: " + this.clock;
                this.snapshot_started = true;

                System.out.println("For process " + this.id + ": " + this.state);
                System.out.println("Channel data between " + msg.sender_id + " and " + msg.receiver_id + " became : φ");

                for (int i = 0; i < this.total_nodes; i++) {
                    if (this.id != i && this.graph[this.id][i] == 1) {
                        Message marker = new Message(this.id, "This is a marker message", i, true);
                        Main.sendMessage(marker);
                    }
                }

            } else if (msg.is_marker && this.snapshot_started) {

                System.out.println("Marker message received by Process " + this.id +
                        " on channel " + msg.sender_id + "_" + msg.receiver_id);

                System.out.println("Local state is already captured in process: " + this.id + " and now the channel " + msg.sender_id + "_" + msg.receiver_id + " is closed");
            }
        }
    }
}
