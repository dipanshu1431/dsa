import java.util.Scanner;

class CircularLinkedList {
	class Node {
		int info;
		Node link;
	}

	Node head;
	Scanner sc = new Scanner(System.in);

	public void create() {
		// Adding first Node
		Node temp = new Node();
		System.out.println("Input info: ");
		temp.info = sc.nextInt();
		temp.link = null;
		head = temp;

		// Adding remaining nodes
		Node newNode;
		System.out.println("Do you want to add more Nodes(1/0): ");
		int ch = sc.nextInt();

		while (ch == 1) {
			newNode = new Node();
			System.out.println("Input info: ");
			newNode.info = sc.nextInt();
			newNode.link = null;
			temp.link = newNode;
			temp = newNode;
			System.out.println("Do you want to add more Nodes(1/0): ");
			ch = sc.nextInt();
		}
	}

	public void display() {
		System.out.println("Linked list is ");
		System.out.println("head=" + head);
		Node temp = head;
		while (temp != null) {
			System.out.println(temp.info + " " + temp.link);
			// System.out.println(temp.info);
			temp = temp.link;
		}
	}

	public int countNodes() {
		int count = 0;
		Node temp = head;
		while (temp != null) {
			count = count + 1;
			temp = temp.link;
		}
		return count;
	}

	public Node search(int ele) {
		Node temp = head;
		while (temp != null) {
			if (temp.info == ele)
				return temp;
			temp = temp.link;
		}
		return null;
	}

	public void insBeg(int ele) {
		Node temp = new Node();
		temp.info = ele;

		temp.link = null;

		if (head == null)
			head = temp;
		else {
			temp.link = head;
			head = temp;
		}

	}

	public void insEnd(int ele) {
		Node temp = new Node();
		temp.info = ele;
		temp.link = null;

		if (head == null)
			head = temp;
		else {
			Node last = head;
			while (last.link != null)
				last = last.link;

			last.link = temp;
		}

	}

	public void insAny(int ele, int loc) {
		Node temp = new Node();
		temp.info = ele;
		temp.link = null;

		int count = countNodes();
		if (loc >= 1 && loc <= count + 1) {
			if (loc == 1)
				insBeg(ele);
			else if (loc == count + 1)
				insEnd(ele);
			else {
				Node prev = head;
				int cnt = 1;
				while (cnt < loc - 1) {
					cnt++;
					prev = prev.link;
				}
				temp.link = prev.link;
				prev.link = temp;
			}
		} else
			System.out.println("Invalid position of insertion");
	}

	public void delBeg() {
		if (head == null) {
			System.out.println("Underflow");
			return;
		}
		head = head.link;
	}

	public void delEnd() {
		if (head == null) {
			System.out.println("Underflow");
			return;
		}
		if (head.link == null)
			delBeg();
		else {
			Node temp = head;
			// Move to last but one node
			while (temp.link.link != null) {
				temp = temp.link;
			}
			temp.link = null;
		}
	}

	public void delAny(int loc) {
		if (head == null) {
			System.out.println("Underflow");
			return;
		}

		int count = countNodes();

		if (loc >= 1 && loc <= count) {
			if (loc == 1) {
				delBeg();
			} else if (loc == count) {
				delEnd();
			} else {
				Node temp = head;
				int cnt = 1;
				// Move to one node before node to be deleted
				while (cnt < loc - 1) {
					cnt++;
					temp = temp.link;
				}
				temp.link = temp.link.link;
			}
		} else
			System.out.println("Invalid position of deletion");
	}

	public void reverse() {
		if (countNodes() >= 2) {
			Node prev = null, curr = head, next = head.link;
			while (curr != null) {
				curr.link = prev;
				prev = curr;
				curr = next;
				if (next != null)
					next = next.link;
			}
			head = prev;
		}
	}

	public void sort() {
		Node i, j;
		for (i = head; i.link != null; i = i.link) {
			for (j = head; j.link != null; j = j.link) {
				if (j.info > j.link.info) {
					int temp = j.info;
					j.info = j.link.info;
					j.link.info = temp;
				}
			}
		}
	}

public static void main(String[] args) {
	
CircularLinkedList cl = new CircularLinkedList();
cl.create();

}
}

