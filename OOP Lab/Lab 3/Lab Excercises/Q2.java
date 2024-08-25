import  java.util.Scanner;
public class Q2 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        for(int i=0,k=1;i<n;i++,k++){
            for(int j=0;j<=i;j++){
                System.out.print(k+" ");
            }
            System.out.println("");
        }
        
        // for each loop
        int a[]={1,2,3,4,5};
        for(int element : a){
            for(int j=0;j<element;j++){
                System.out.print(element+" ");
            }
            System.out.println("");
        }
    }   
}
