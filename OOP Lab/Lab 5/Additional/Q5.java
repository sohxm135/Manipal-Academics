public class Q5 {

    public static int square(int x) {
        return x * x;
    }

    public static double square(double x) {
        return x * x;
    }

    public static void main(String[] args) {
        int intResult = square(3);
        double doubleResult = square(0.2);

        System.out.println("Square of 3 (int): " + intResult);
        System.out.println("Square of 0.2 (double): " + doubleResult);
    }
}
