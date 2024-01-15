class hello {
    public static void main(String[] args) {
        // Scanner input=new Scanner(System.in);
        // System.out.println("enter integer number: ");
        // int ints= input.nextInt();
        // System.out.println("int "+ints);
        int[] arr = { 5, 7, 2, 3, 6, 8 };
        // int s = arr.length;
        // System.out.println(s);
        int n = 6;
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] < arr[j + 1]) {
                    int tamp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tamp;
                }
            }
        }
        // for (int i = n-2; i >=0; i--) {
        //     for (int j = 0; j <= i; j++) {
        //         if (arr[j] < arr[j + 1]) {
        //             int tamp = arr[j];
        //             arr[j] = arr[j + 1];
        //             arr[j + 1] = tamp;
        //         }
        //     }
        // }
        System.out.println("\nBubble short ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
        }
    }
}