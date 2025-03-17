public class Main {
    public static void main(String[] args) {
        int[] arr = new int[5]; // Memory allocated on the heap
        // No need to manually free memory, garbage collector handles it
        System.out.println("Array: " + arr[0]);
    }
}