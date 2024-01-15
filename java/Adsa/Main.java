// class node {
//     node next;
//     int data;

//     node(int x) {
//         this.data = x;
//         this.next = null;
//     }
// }

// class linkedLIst {
//     node head;
//     public static void display(node head) {
//         node ptr = head;
//         while (ptr != null) {
//             System.out.println(ptr.data + " ");
//             ptr = ptr.next;
//         }
//     }

//     public static void addNode(node head,int data) {
//         node newNode = new node(data);
//         if (head == null) {
//             head = newNode;
//         } else {
            
//             node temp = head;
//             while (temp.next != null)
//                 temp = temp.next;
//             temp.next = newNode;
//         }
//     }

//     public static void main(String[] args) {

//         linkedList list = new LinkedList();
//         node head =new node(10);
//         list.addNode(head,20);
//         list.addNode(head,30);
//         // display(head);


//     }
// }


public class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class LinkedList {
    Node head;

    public void addNode(int data) {
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

    public void printNodes() {
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

    public void addAtEnd(int data) {
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
        LinkedList list = new LinkedList();

        // Add nodes to the linked list.
        list.addNode(10);
        list.addNode(20);
        list.addNode(30);

        // Print the nodes in the linked list.
        list.printNodes();

        // Add a node in between the first and second nodes.
        list.addInBetween(15, list.head);

        // Add a node at the end of the linked list.
        list.addAtEnd(40);

        // Print the nodes in the linked list again.
        list.printNodes();
    }
}

