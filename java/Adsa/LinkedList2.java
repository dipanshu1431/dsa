public class LinkedList2 {
    public class Node {
        int data;
        Node next;
    
        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }
    static Node head;

    public static void addNode(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    public static void printNodes() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public void addInBetween(int data, Node previousNode) {
        Node newNode = new Node(data);
        newNode.next = previousNode.next;
        previousNode.next = newNode;
    }

    public static void addAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    public static void main(String[] args) {
        // LinkedList list = new LinkedList();

        // Add nodes to the linked list.
        addNode(10);
        addNode(20);
        addNode(30);

        // Print the nodes in the linked list.
        printNodes();

        // Add a node in between the first and second nodes.
        addInBetween(15, list.head);

        // Add a node at the end of the linked list.
        addAtEnd(40);

        // Print the nodes in the linked list again.
        printNodes();
    }
}
