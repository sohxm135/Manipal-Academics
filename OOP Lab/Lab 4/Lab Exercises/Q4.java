import java.util.Scanner;

public class Q4 {
    
     public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m,n,a,b,mat1[][],mat2[][];
        boolean Add, Multiply;
       
        /*testing values
        int mat1[][]={{1,0,1},{2,1,1},{0,1,1},{1,1,2}};
        int mat2[][]={{1,2,1},{2,3,1},{4,2,2}};
        int m =4,n=3,a=3,b=3; */

        System.out.println("Enter size m x n of matrix 1");
        m=sc.nextInt();
        n=sc.nextInt();
        System.out.println("Enter size a x b of matrix 2");
        a=sc.nextInt();
        b=sc.nextInt();

        Add      = m==a&&n==b?true:false;
        Multiply = n==a?true:false;

        if(!Add && !Multiply){
            System.out.println("INVALID MATRIX\nNot possible to Add OR Multiply");
            return;
        }
        mat1=new int[m][n];
        mat2=new int[a][b];
        System.out.println("Enter Mat 1");
       
        //Input matrix 1 m x n
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mat1[i][j]=sc.nextInt();
            }
        }
                
         //Input matrix 2 n x o
          System.out.println("Enter Mat 2");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                mat2[i][j]=sc.nextInt();
            }
        }
        //PRINTING OUT MAT 1 and MAT 2
        System.out.println("MAT 1:");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(mat1[i][j]+" ");
            }
            System.out.println("");
        }
        System.out.println("MAT 2:");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                System.out.print(mat2[i][j]+" ");
            }
            System.out.println("");
        }

        //ADDING if possible
        if(Add){
            System.out.println("Adding...");
            AddMat(mat1,mat2,a,b);
        }
        //MULTIPLYING IF POSSIBLE
        if(Multiply){
            System.out.println("Multiplying....");
            for(int i=0;i<m;i++){
                for(int j=0;j<b;j++){
                    int cij=0;
                    for(int k=0;k<n;k++){
                        cij += mat1[i][k]*mat2[k][j];
                    }
                    System.out.print(cij+" ");
                }
                System.out.println("");
            }
        }

    }

    static void AddMat(int mat1[][],int mat2[][],int m , int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(mat1[i][j]+mat2[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
