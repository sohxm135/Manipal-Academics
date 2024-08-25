import java.util.Arrays;
import java.util.Scanner;

public class Q5 {
      public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt(),mat[][],rsum[],csum[],pd=0,npd=0;
        mat=new int[m][m];
        rsum=new int[m];
        csum=new int[m];
        Arrays.fill(rsum, 0);
        Arrays.fill(csum, 0);

        //Input matrix m x m
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                mat[i][j]=sc.nextInt();
            }
        }
    
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
               rsum[i]+=mat[i][j];
               csum[j]+=mat[i][j];
               if(i==j){
                pd+=mat[i][j];
               }
               if(i+j==m-1){
                    npd+=mat[i][j];
               }
            }
            System.out.println();
        }
        if(pd!=npd){
            no();
            return;
        }
        for(int i=0;i<m;i++){
            if(pd!=rsum[i]||pd!=csum[i])
            {   no();
                return;
            }
        }
        System.out.println("MAGIC Matrix!");
    }
    static void no(){
        System.out.println("NOT magic matrix");
    }
    
    
}
