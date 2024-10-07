import java.util.Scanner;

public class A5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a five-letter word:");
        String word = scanner.nextLine();

        for (int i = 0; i < word.length(); i++) {
            for (int j = i + 1; j < word.length(); j++) {
                for (int k = j + 1; k < word.length(); k++) {
                    System.out.println("" + word.charAt(i) + word.charAt(j) + word.charAt(k));
                }
            }
        }
    }
}
