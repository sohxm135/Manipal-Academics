
public class Q1 {
    static void p_bool(boolean A){
        if(A == true)
            System.out.println("True");
        else System.out.println("False");
    }
    public static void main(String[] args) {
        int a=4,b=6;
        System.out.println((a<<2)+(b>>2));
        p_bool(b>0);
        System.out.println((a + b * 100) / 10);
        System.out.println(a&b);
    }
    
}
