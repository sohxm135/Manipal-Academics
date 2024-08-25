import  java.util.Scanner;
public class Q3_L {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a range for getting Prime Numbers: ");
        int n = s.nextInt(),m=s.nextInt();
        boolean is_prime = true;
        
        for(int i=n;i<m;i++){
           is_prime = true;
            for(int j=2;j<i;j+=2){
                if(i%j==0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime==true){
                System.out.print(i +", ");
            }
        }
    }
}