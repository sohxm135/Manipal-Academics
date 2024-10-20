import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        try {
            // Input for number of rows
            System.out.print("Enter the number of rows: ");
            int rows = Integer.parseInt(sc.nextLine());
            
            // Input for number of columns
            System.out.print("Enter the number of columns: ");
            int cols = Integer.parseInt(sc.nextLine());
            
            // Check if the matrix is square
            if (rows == cols) {
                System.out.println("The matrix is a square matrix.");
            } else {
                System.out.println("The matrix is not a square matrix.");
            }
        } catch (NumberFormatException e) {
            // Handling non-numeric input
            System.out.println("Invalid input! Please enter valid numeric values for rows and columns.");
        } catch (Exception e) {
            // Handling any unexpected exceptions
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}