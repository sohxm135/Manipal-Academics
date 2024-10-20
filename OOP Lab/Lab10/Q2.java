class ArrayOverflowException extends Exception {
    public ArrayOverflowException(String message) {
        super(message);
    }
}

public class Q2 {
    private static final int MAX_SIZE = 100; // maximum allowed size

    // Function to check array size
    static void checkArraySize(int[] array) throws ArrayOverflowException {
        if (array.length > MAX_SIZE) {
            throw new ArrayOverflowException("Array size exceeds the maximum limit of " + MAX_SIZE);
        }
    }

    public static void main(String[] args) {
        try {
            int[] array = new int[150]; // change this size to test the exception
            checkArraySize(array);
            // Continue processing array if size is valid
            System.out.println("Array size is valid.");
        } catch (ArrayOverflowException e) {
            System.out.println(e.getMessage());
        }
    }
}
