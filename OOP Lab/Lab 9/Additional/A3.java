import java.util.Scanner;

public class A3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter string " + (i + 1) + ":");
            result.append(scanner.nextLine());
        }

        System.out.println("Concatenated string: " + result.toString());
    }
}
