import  java.util.Scanner;
public class Q4 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a[]={1,2,3,1,2,1,5,6,7}, searchValue=s.nextInt(),i=0;
        for( int element:a){
            if(element==searchValue){
                System.out.print("a["+i+"], ");
            }
            i++;
        }
    }
}
