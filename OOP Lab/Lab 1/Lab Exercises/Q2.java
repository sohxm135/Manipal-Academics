// 2. Write a Java program to enter 10 numbers and display the number of positive,negative and zeros number.
import java.util.Scanner;

public class Q2 {
    public static void main(String args[]){
        int p=0,n=0,z=0;
        int[] a= new int[10];
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter 10 Numbers");
        for(int i=0;i<10;i++){
            a[i] = sc.nextInt();
            if(a[i]>0) p++;
            else if(a[i]<0) n++;
            else z++;
      }  
      System.out.println("P = "+p);
      System.out.println("N = "+n);
      System.out.println("Z = "+z);
    //   sc.close();
    }
    
}
