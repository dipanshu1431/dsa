public class doublyLinkedList {
    public class Node {
        int data;
        Node next;
        Node pre;

        public Node(int data) {
            this.data = data;
            this.next = null;
            this.pre = null;
        }
    }

    static Node head;
    static Node tail;
    public void display() {
        Node current = head;
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        System.out.println("Nodes of doubly linked list: ");
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    public void addNode(int data) {

        Node newNode = new Node(data);

        if (head == null) {
            head = tail = newNode;
        } else {
            tail.next = newNode;
            newNode.pre = tail;
            tail = newNode;
        }
    }
    void deleteAtBeg(){
        if(head==null){
            return ;
        }else if(head!=tail){
            head =head.next;
            head.pre =null;
        }else{
            head =tail =null;
        }
    }
    void deleteAtEnd(){
        if(tail==null){
            return;
        }
        tail =tail.pre;
        tail.next =null;
    }
    public static void main(String[] args) {
        doublyLinkedList dll = new doublyLinkedList();
        dll.addNode(10);
        dll.addNode(20);
        dll.addNode(30);
        dll.addNode(40);
        dll.display();
        dll.deleteAtBeg();
        dll.display();

    }

}
