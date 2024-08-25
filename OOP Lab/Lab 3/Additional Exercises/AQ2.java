import  java.util.Scanner;
public class AQ2 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double x = s.nextDouble(),op,sin=0,sum=0;
        int i=1;
        while(i<10){
            op =-1* Math.pow(x, i)/Fact(i);
            sin = sin - op;
            i+=2;
        }
        System.out.println("sin("+x+") = "+sin);
        for (int j = 0; j < 100; j++) {
            sum +=Math.pow(1/j,j);
        }
        System.out.println("sum = "+sum);

    }
    static int Fact(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact *=i;
        }
        return fact;
    }
}
