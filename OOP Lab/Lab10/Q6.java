import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            // Input from the user
            System.out.print("Enter a number: ");
            float number = Float.parseFloat(sc.nextLine()); // Using parseFloat for float input handling
            
            // Check if the number is negative
            if (number < 0) {
                System.out.println("Cannot compute the square root of a negative number in the real number system.");
            } else {
                // Compute the square root
                float result = (float) Math.sqrt(number); // Casting result to float
                System.out.println("The square root of " + number + " is: " + result);
            }
        } catch (NumberFormatException e) {
            // Handle cases where the input is not a valid number
            System.out.println("Invalid input! Please enter a valid numeric value.");
        } catch (Exception e) {
            // Handle any unexpected exceptions
            System.out.println("An error occurred: " + e.getMessage());
        }
    }
}
