class Swap {
    public void swapByValue(int a, int b) {
        System.out.println("Before swap by value: a = " + a + ", b = " + b);
        int temp = a;
        a = b;
        b = temp;
        System.out.println("After swap by value: a = " + a + ", b = " + b);
    }

    public void swapByReference(IntWrapper a, IntWrapper b) {
        System.out.println("Before swap by reference: a = " + a.value + ", b = " + b.value);
        int temp = a.value;
        a.value = b.value;
        b.value = temp;
        System.out.println("After swap by reference: a = " + a.value + ", b = " + b.value);
    }
}

class IntWrapper {
    int value;

    IntWrapper(int value) {
        this.value = value;
    }
}

public class Q3 {
    public static void main(String[] args) {
        int x = 10, y = 20;
        Swap swapper = new Swap();

        // Call by Value
        swapper.swapByValue(x, y);

        // Call by Reference
        IntWrapper xWrapper = new IntWrapper(x);
        IntWrapper yWrapper = new IntWrapper(y);
        swapper.swapByReference(xWrapper, yWrapper);
    }
}
