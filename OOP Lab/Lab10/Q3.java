 import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        try {
            System.out.print("Enter student's name: ");
            String name = sc.nextLine();
            
            System.out.print("Enter roll number: ");
            int rollNumber = Integer.parseInt(sc.nextLine());
            
            // Simplifying marks input using an array
            int[] marks = new int[3];
            System.out.println("Enter marks in three subjects:");
            for (int i = 0; i < 3; i++) {
                marks[i] = Integer.parseInt(sc.nextLine());
            }

            // Calculating total and percentage
            int total = marks[0] + marks[1] + marks[2];
            double percentage = (total / 300.0) * 100;

            System.out.println("Percentage: " + percentage + "%");

            // Assigning grade based on percentage
            String grade;
            if (percentage >= 90) {
                grade = "A";
            } else if (percentage >= 75) {
                grade = "B";
            } else if (percentage >= 50) {
                grade = "C";
            } else {
                grade = "D";
            }
            
            System.out.println("Grade: " + grade);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input. Please enter numeric values for roll number and marks.");
        }
    }
}
