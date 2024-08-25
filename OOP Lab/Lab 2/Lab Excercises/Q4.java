public class Q4 {
    public static void main(String[] args) {

        int x = 10;
        double y = x;
        System.out.println("a." + y); // This will print: a.10.0
        
        double a = 10.5;
        int b = (int) a;  
        System.out.println("b." + b); // This should print: b.10
        
        double p = 10.5;
        int q = (int) p;
        System.out.println("c." + q); // This will also print: c.10
    }
}
