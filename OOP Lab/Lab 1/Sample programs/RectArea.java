import java.util.Scanner;
class RectArea{
	public static void main(String args[]){

	Scanner a = new Scanner(System.in);
	int l,b,A;
	System.out.print("Enter length: ");
	l = a.nextInt();
	System.out.print("Enter breadth: ");
	b = a.nextInt();

	A=l*b;
	System.out.println("l="+l+"\nb="+b+"\nArea ="+A);
	
	}
}