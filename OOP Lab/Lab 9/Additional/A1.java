import java.util.Arrays;
import java.util.Scanner;

public class A1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of strings:");
        int n = scanner.nextInt();
        scanner.nextLine();

        String[] strings = new String[n];
        System.out.println("Enter the strings:");
        for (int i = 0; i < n; i++) {
            strings[i] = scanner.nextLine();
            strings[i]=strings[i].toLowerCase();
        }

        Arrays.sort(strings);
        System.out.println("Strings in alphabetical order:");
        for (String s : strings) {
            System.out.println(s);
        }
    }
}
