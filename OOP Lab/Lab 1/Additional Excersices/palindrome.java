/**
 * Write a program to check whether a number is palindrome or not.
 */
public class palindrome {
    public static void main(String args[]){
        int num = 1001,d,n=num,rev=0;
        while(n>0){
            d=n%10;         //stores the last digit 
            rev=rev*10+d;   //adds digit to the 'reversed' number
            n=n/10;
        }
        if(rev==num)
            System.out.println(num+" is Palindrome");
        else System.out.println(num+" is NOT Palindrome");
    }
    
}