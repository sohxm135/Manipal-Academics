import java.util.Arrays;
import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the first array: ");
        int size1 = scanner.nextInt();
        int[] arr1 = new int[size1];

        System.out.println("Enter the elements of the first array:");
        for (int i = 0; i < size1; i++) {
            arr1[i] = scanner.nextInt();
        }

        System.out.print("Enter the size of the second array: ");
        int size2 = scanner.nextInt();
        int[] arr2 = new int[size2];

        System.out.println("Enter the elements of the second array:");
        for (int i = 0; i < size2; i++) {
            arr2[i] = scanner.nextInt();
        }

        int[] mergedArray = new int[size1 + size2];

        System.arraycopy(arr1, 0, mergedArray, 0, size1);
        System.arraycopy(arr2, 0, mergedArray, size1, size2);

        Arrays.sort(mergedArray);

        System.out.println("Merged and sorted array: " + Arrays.toString(mergedArray));

        scanner.close();
    }
}
