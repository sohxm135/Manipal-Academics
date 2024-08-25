class Stack {
    private int[] stackArray;
    private int top;
    private int maxSize;

    public Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }

    public void push(int value) {
        if (top == maxSize - 1) {
            System.out.println("Stack overflow");
        } else {
            stackArray[++top] = value;
        }
    }

    public int pop() {
        if (top == -1) {
            System.out.println("Stack underflow");
            return -1;
        } else {
            return stackArray[top--];
        }
    }

    public int peek() {
        if (top == -1) {
            System.out.println("Stack is empty");
            return -1;
        } else {
            return stackArray[top];
        }
    }

    public boolean isEmpty() {
        return (top == -1);
    }
}

public class Q4 {
    public static void main(String[] args) {
        Stack stack = new Stack(5);
        
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);

        System.out.println("Top element: " + stack.peek());

        while (!stack.isEmpty()) {
            System.out.println("Popped element: " + stack.pop());
        }

        stack.pop();  // This should trigger stack underflow
    }
}
