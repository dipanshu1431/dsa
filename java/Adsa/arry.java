class dipanshu {
    public static void main(String[] args) {
        System.out.println("arry reverse");
        int[] arr = { 10, 20, 30, 50, 60 };
        int n = 5 ;
        for (int i = 0; i < n; i++) {
            int data = arr[i];
            arr[i] = arr[n - i];
            arr[n - i] = data;
        }
        for (int j = 0; j < n; j++) {
            System.out.println(arr[i] + " ");
        }

    }

}
