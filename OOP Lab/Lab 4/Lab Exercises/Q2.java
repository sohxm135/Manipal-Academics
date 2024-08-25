import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt(),mat[][],sum=0;
        mat=new int[m][m];
        //Input matrix m x m
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=sc.nextInt();
            }
        }
    
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                
                if((i==j) || ((i+j)==m-1)){
                    System.out.print(mat[i][j]+" ");
                    sum+=mat[i][j];
                }
                else System.out.print("  ");
            }
            System.out.println();
        }
        System.out.println("Sum of principle diagonal Elements = "+sum);
    }
}
