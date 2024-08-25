import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        double x,y,ans;
        char op,c='y';
        Scanner scn = new Scanner(System.in);
        do{
            System.out.println("Please Enter the 1st number: ");
            x=scn.nextDouble();
            System.out.println("Please Enter an operator out of (+,-,*,/): ");
            op=scn.next().charAt(0);
            System.out.println("Please Enter the 2st number: ");
            y=scn.nextDouble();

            switch (op) {
                case '+':   
                    ans = x+y;
                    break;
                case '-':
                    ans = x-y;
                    break;
                case '*':
                    ans = x*y;
                    break;
                case '/': 
                    ans=x/y;
                    break;
                default:
                System.out.println("INVLAID OPERATOR, PLZ TRY AGIAN");
                continue;
            }
            
            System.out.println("Answer = "+ans+"\nWould u like to do another Calculation? y/n");
            c=scn.next().charAt(0);
        } while(c=='y');

    }
}
