class Toh {

    void toh(int n, char S, char D, char A) {
        if (n == 0)
            return;
        toh(n - 1, S, A, D);
        System.out.print("Move disk ");
        System.out.print(n);
        System.out.print(" from " + S + " to " + D);
        System.out.println(" ");
        toh(n - 1,  A, D,S);

    }

    public static void main(String[] args) {
        Toh t = new Toh();
        t.toh(3, 'S', 'D', 'A');
    }
}