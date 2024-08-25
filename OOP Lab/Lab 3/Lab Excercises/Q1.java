import  java.util.Scanner;

class Q1{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n =s.nextInt(),d,arm=0,num=n;
        while(n>0){
            d = n%10;
            arm = arm + d*d*d;
            n/=10;
        }  
        if(arm==num){
            System.out.println("Armstrong Number!");
        } 
        else  System.out.println( "NOT Armstrong");
       
    }
}