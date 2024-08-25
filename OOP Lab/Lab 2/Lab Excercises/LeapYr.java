//Leap year
import java.util.Scanner;
class LeapYr{
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int yr=scn.nextInt();
        if(yr%4!=0)
            System.out.println("It is a common Year");
        else if(yr%100!=0)  
            System.out.println("It is a Leap Year");
        else if(yr%400!=0)
            System.out.println("It is a common Year");
        else  System.out.println("It is a Leap Year");
    }
}