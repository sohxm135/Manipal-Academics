import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the size of the square matrix (n x n): ");
        int n = scanner.nextInt();

        int[][] matrix = new int[n][n];
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int trace = 0;
        int normSum = 0;

        for (int i = 0; i < n; i++) {
            trace += matrix[i][i];
            for (int j = 0; j < n; j++) {
                normSum += matrix[i][j] * matrix[i][j];
            }
        }

        double norm = Math.sqrt(normSum);

        System.out.println("Trace of the matrix: " + trace);
        System.out.println("Norm of the matrix: " + norm);

        scanner.close();
    }
}
