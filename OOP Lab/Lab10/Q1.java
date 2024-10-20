
import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();
        int n;
        try{
        n =  Integer.parseInt(inp);
        System.out.println(n);
        }
        catch(NumberFormatException A){
            System.out.println("Invalid input\n"+A);
        }
    }
}
