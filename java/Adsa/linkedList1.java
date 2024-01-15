public class linkedList1 {
    public Node head;
    public class Node {
        int data;
        Node next;
    
        // public Node(int data) {
        //     this.data = data;
        //     this.next = null;
        // }
    }
    void addNode(int data) {
        Node newNode = new Node();
        // newNode->data=data;
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


    void addInBetween(int data) {
        Node previousNode=head;
        Node newNode = new Node(data);
        newNode.next = previousNode.next;
        previousNode.next = newNode;
    }

    void addAtEnd(int data) {
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
    void printNodes() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();

        // Add nodes to the linked list.
        LinkedList.addNode(10);
        LinkedList.addNode(20);
        LinkedList.addNode(30);

        // Print the nodes in the linked list.
        // LinkedList.printNodes();

        // // Add a node in between the first and second nodes.
        // list.addInBetween(15);

        // // Add a node at the end of the linked list.
        // list.addAtEnd(40);

        // // Print the nodes in the linked list again.
        // list.printNodes();
    }
}
