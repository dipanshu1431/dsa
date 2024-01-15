import java.util.Scanner;
public class circular1 {
    class Node {
		int data;
		Node next;
        Node(int d){
            this.data=d;
            this.next=null;
        }
	}
    Node head =null;
    Node tail = null;
    Scanner sc =new Scanner(System.in);
    void insert(int x){
        Node temp = new Node(x);
        if(head==null){
            head=temp;
            tail =temp;
            tail.next=head;
            return;
        }
        temp.next = head;
        head =temp;
    }
    void inserAtEnd(int x){
        Node temp= new Node(x);
        tail.next =temp;
        tail = temp;
    }

    void display(){
        Node temp =head;
        while(temp!=tail){
            System.out.println(temp.data);
            temp=temp.next;
        }
        System.out.println(tail.data);
    }

    // void create(){
    //     System.out.println("Enter the data: ");
    //     int x =sc.nextInt();
    //     Node temp =head;
        
    // }
    
    

    public static void main(String[] args) {
        circular1 ob =new circular1();
        ob.insert(10);
        ob.insert(20);
        ob.insert(30);
        ob.insert(40);
        ob.display();
        System.out.println("all");
        ob.inserAtEnd(100);
        ob.inserAtEnd(200);
        ob.inserAtEnd(300);
        ob.display();
    }
}
