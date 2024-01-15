import java.util.LinkedList;
import java.util.Queue;
public class queue {
    public static void main(String args[]) {
        Queue<Integer> num = new LinkedList<>();

        // offer / add elements to the Queue
        num.add(1);
        num.offer(2);
        num.offer(3);
        System.out.println("Queue: " + num);
        // Access elements of the Queue
        int accessedNumber = num.peek();
        System.out.println("Accessed Element: " + accessedNumber);
        // Remove elements from the Queue
        int removedNumber = num.poll();
        System.out.println("Removed Element: " + removedNumber);
        System.out.println("Updated Queue: " + num);
    }
}
