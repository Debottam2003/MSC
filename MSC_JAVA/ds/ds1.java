package ds;

import java.util.*;

public class ds1 {
    public static void main(String[] args) {
        // ArrayList example
        ArrayList<String> todo = new ArrayList<>();
        todo.add("debottam kar");
        todo.add("react");
        todo.add("js");
        System.out.println("Initial ArrayList:");
        for(String str : todo){
            System.out.println(str);
        }
        todo.add("go");
        todo.add("rust");
        System.out.println("ArrayList after adding 'go' and 'rust':");
        for(String str : todo){
            System.out.println(str);
        }
        todo.remove(3);
        System.out.println("ArrayList size after removal: " + todo.size());
        System.out.println("ArrayList after removing element at index 3:");
        for(String str : todo){
            System.out.println(str);
        }
        System.out.println("---------------------------------------------");

        // Stack example
        Stack<Integer> s = new Stack<>();
        s.push(10);
        s.push(20);
        s.push(30);
        System.out.println("Initial Stack: " + s);
        System.out.println("Top element is: " + s.peek());
        System.out.println("Stack size is: " + s.size());
        System.out.println("Popped element is: " + s.pop());
        System.out.println("Top element after pop is: " + s.peek());
        System.out.println("Stack size after pop is: " + s.size());
        System.out.println("---------------------------------------------");

        // Queue example
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        System.out.println("Initial Queue: " + queue);
        System.out.println("Polled element: " + queue.poll());
        System.out.println("Queue after polling: " + queue);
        queue.offer(40);
        System.out.println("Queue after offering 40: " + queue);
        System.out.println("---------------------------------------------");

        // LinkedList example
        LinkedList<Object> linked = new LinkedList<>();
        linked.add(2);
        linked.add("debottam kar");
        linked.add(s);
        System.out.println("Initial LinkedList: " + linked);
        linked.addFirst(queue);
        System.out.println("LinkedList after adding queue at first:");
        linked.forEach(System.out::println);
        linked.addLast("go");
        System.out.println("LinkedList after adding 'go' at last: " + linked);
        System.out.println("LinkedList size: " + linked.size());
        System.out.println("---------------------------------------------");

        // LinkedHashSet example
        LinkedHashSet<Integer> lhs = new LinkedHashSet<>();
        lhs.add(10);
        lhs.add(20);
        System.out.println("LinkedHashSet: " + lhs);
        System.out.println("---------------------------------------------");

        // HashMap example
        HashMap<Integer, String> h = new HashMap<>();
        h.put(1, "Debottam");
        h.put(2, "Java");
        h.put(3, "Go");
        System.out.println("HashMap: " + h);
        System.out.println("---------------------------------------------");

        // HashSet example
        HashSet<String> hs = new HashSet<>();
        hs.add("Java");
        hs.add("Python");
        hs.add("Go");
        hs.add("Rust");
        System.out.println("HashSet: " + hs);
        System.out.println("---------------------------------------------");

        // TreeMap example
        TreeMap<Integer, String> tm = new TreeMap<>();
        tm.put(1, "js");
        tm.put(3, "java");
        tm.put(4, "go");
        tm.put(2, "rust");
        System.out.println("TreeMap: " + tm);
        System.out.println("---------------------------------------------");

        // TreeSet example
        TreeSet<String> ts = new TreeSet<>();
        ts.add("js");
        ts.add("java");
        ts.add("go");
        ts.add("rust");
        System.out.println("TreeSet: " + ts);
        System.out.println("---------------------------------------------");

        // Double ended queue example
        Deque<Integer> dq = new LinkedList<>();
        dq.addFirst(10);
        dq.addLast(20);
        dq.addFirst(5);
        System.out.println("Initial Deque: " + dq);
        dq.removeFirst();
        System.out.println("Deque after removing first element: " + dq);
        System.out.println("---------------------------------------------");

        // LinkedHashMap example
        LinkedHashMap<Integer, String> lhm = new LinkedHashMap<>();
        lhm.put(1, "Debottam");
        lhm.put(2, "Java");
        lhm.put(3, "Go");
        lhm.put(4, "Rust");
        System.out.println("Initial LinkedHashMap: " + lhm);
        lhm.remove(3);
        System.out.println("LinkedHashMap after removing key 3: " + lhm);
        System.out.println("Size of LinkedHashMap: " + lhm.size());
        System.out.println("---------------------------------------------");

        // PriorityQueue example
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(30);
        pq.add(20);
        pq.add(10);
        System.out.println("PriorityQueue: " + pq);
        System.out.println("Top element is: " + pq.peek());
        System.out.println("Removed element: " + pq.poll());
        System.out.println("PriorityQueue after removal: " + pq);
        System.out.println("---------------------------------------------");
    }
}
