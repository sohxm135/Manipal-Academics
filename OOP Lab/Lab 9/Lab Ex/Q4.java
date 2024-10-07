import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the first string:");
        String str1 = scanner.nextLine();
        
        System.out.println("Enter the second string:");
        String str2 = scanner.nextLine();
        boolean b = false;
        while (b) {
            System.out.println("\nMenu:");
            System.out.println("1. Compare two strings");
            System.out.println("2. Convert case");
            System.out.println("3. Check substring");
            System.out.println("4. Replace substring with 'Hello'");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.println("Strings are equal: " + str1.equals(str2));
                    break;
                case 2:
                    String converted = str1.equals(str1.toUpperCase()) ? str1.toLowerCase() : str1.toUpperCase();
                    System.out.println("Converted string: " + converted);
                    break;
                case 3:
                    System.out.println("Is second string a substring of first: " + str1.contains(str2));
                    break;
                case 4:
                    if (str1.contains(str2)) {
                        String replaced = str1.replace(str2, "Hello");
                        System.out.println("Modified string: " + replaced);
                    } else {
                        System.out.println("Second string is not a substring of the first.");
                    }
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
