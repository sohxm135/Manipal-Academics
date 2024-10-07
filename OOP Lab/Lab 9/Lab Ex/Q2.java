import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the original string:");
        String input = scanner.nextLine();

        System.out.println("Enter the word to replace:");
        String wordToReplace = scanner.nextLine();

        StringBuilder result = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (String.valueOf(c).equals(wordToReplace)) {
                result.append(c);
            } else {
                result.append(wordToReplace);
            }
        }

        System.out.println("Modified string: " + result.toString());
    }
}
