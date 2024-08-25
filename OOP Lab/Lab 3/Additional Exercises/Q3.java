import  java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
       
        for(int i=0,k=1;i<n;i++){
            for(int j=0;j<=i;j++,k++){
                System.out.print(k+" ");
            }
            System.out.println("");
        }
    }
}
