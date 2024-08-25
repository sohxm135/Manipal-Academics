

public class Q2 {
    public static void main(String[] args) {
        int a=2,b=40,c=22,L,S;
        L= a>b?(a>c?a:c):(b>c?b:c);
        S =  a<b?(a<c?a:c):(b<c?b:c);
        System.out.println("L = "+L+" S = "+S);
    }
}
