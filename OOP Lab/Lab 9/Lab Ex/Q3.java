import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = scanner.nextLine();
        boolean b = true;
        while (b) {
            System.out.println("\nMenu:");
            System.out.println("1. Check if palindrome");
            System.out.println("2. Sort string alphabetically");
            System.out.println("3. Reverse string");
            System.out.println("4. Concatenate original and reversed string");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();
           // scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    String reversed = new StringBuilder(input).reverse().toString();
                    System.out.println("Is palindrome: " + input.equals(reversed));
                    break;
                case 2:
                    char[] chars = input.toCharArray();
                    java.util.Arrays.sort(chars);
                    System.out.println("Sorted string: " + new String(chars));
                    break;
                case 3:
                    System.out.println("Reversed string: " + new StringBuilder(input).reverse().toString());
                    break;
                case 4:
                    String concatenated = input + new StringBuilder(input).reverse().toString();
                    System.out.println("Concatenated string: " + concatenated);
                    break;
                case 5:
                    b=false;
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }
    }
}
