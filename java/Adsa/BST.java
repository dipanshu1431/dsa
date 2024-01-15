class Node {
    int data;
    Node left;
    Node right;

    public Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

public class BST {

    Node inser(Node root, int key) {
        if (root == null) {
            root = new Node(key);
            return root;
        }

        if (root.data > key) {
            root.left=inser(root.left, key);
        } else {
            root.right = inser(root.right, key);
        }
        return root;
    }

    public void preOrder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }
    public void postOrder(Node root) {
        if (root == null) {
            return;
        }
        preOrder(root.left);
        preOrder(root.right);
        System.out.print(root.data + " ");
    }
    public void InOrder(Node root) {
        if (root == null) {
            return;
        }
        preOrder(root.left);
        System.out.print(root.data + " ");
        preOrder(root.right);
    }

    public static void main(String[] args) {
        BST ob = new BST();
        Node root = new Node(80);
        ob.inser(root, 100);
        ob.inser(root, 10);
        ob.inser(root, 180);
        ob.inser(root, 190);
        System.out.println("Pre Order");
        ob.preOrder(root);
        System.out.println("\nPost Order");
        ob.postOrder(root);
        System.out.println("\nIn Order");
        ob.InOrder(root);

    }

}
