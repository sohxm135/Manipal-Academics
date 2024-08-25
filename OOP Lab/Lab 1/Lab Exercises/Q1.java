//Write a Java program to find area and circumference of a rectangle. 

import java.util.Scanner;  //using Scanners

public class Q1 {            // 1. Write a Java program to find area and circumference of a rectangle.
    public static void main(String arga[]){
        Scanner scan = new Scanner(System.in);
        double l,b,P,A;
        System.out.println("Enter Length: ");
        l=scan.nextDouble();
        System.out.println("Enter Breadth: ");
        b=scan.nextDouble();
        P=2*(l+b);
        A=l*b;
        System.out.println("Perimeter = "+P+"\nArea="+A);
    }

}   
