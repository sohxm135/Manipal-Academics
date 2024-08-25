import java.util.Scanner;
class Numtable{
	public static void main(String args[]){

	Scanner a = new Scanner(System.in);
    System.out.println("Enter number: ");
    int n = a.nextInt();
    for(int i=1;i<=n;i++){
        System.out.println(n+" x "+i+" = "+n*i);
    }
    }	
}