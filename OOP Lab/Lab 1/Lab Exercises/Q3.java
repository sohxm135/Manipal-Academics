//3. Write a Java program to generate odd numbers from 1 to 100.

public class Q3 {  
    public static void main(String args[]){
        for(int i=1;i<=100;i++)
        if(i%2 != 0)
            System.out.print(i+" ");
    }
}
