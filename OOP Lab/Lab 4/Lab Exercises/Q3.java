import java.util.Scanner;

public class Q3 {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt(),mat[][];
        boolean is_symmetric = true;
        mat=new int[m][m];
        //Input matrix m x m
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=sc.nextInt();
            }
        }
    
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
              //  System.out.print(mat[i][j]+" ");
               if(mat[i][j]!=mat[j][i]){
                    is_symmetric = false;
                    break;
               }
            }
            System.out.println();
        }
        if(is_symmetric)
            System.out.println("Matrix is Symmetric!");
        else System.out.println("Matrix is NOT Symmetric!");
    }
}
