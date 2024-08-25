import java.util.Arrays;
import java.util.Scanner;

class IntegerArray {
    int[] arr = new int[10];

    public void inputValues() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter 10 integers:");
        for (int i = 0; i < 10; i++) {
            arr[i] = scanner.nextInt();
        }
    }

    public void displayValues() {
        System.out.println("Array elements: " + Arrays.toString(arr));
    }

    public void displayLargestValue() {
        int max = arr[0];
        for (int i = 1; i < 10; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        System.out.println("Largest value: " + max);
    }

    public void displayAverage() {
        int sum = 0;
        for (int value : arr) {
            sum += value;
        }
        double average = sum / 10.0;
        System.out.println("Average value: " + average);
    }

    public void sortArray() {
        Arrays.sort(arr);
        System.out.println("Sorted array: " + Arrays.toString(arr));
    }
}

public class Q2 {
    public static void main(String[] args) {
        IntegerArray array = new IntegerArray();
        array.inputValues();
        array.displayValues();
        array.displayLargestValue();
        array.displayAverage();
        array.sortArray();
    }
}
