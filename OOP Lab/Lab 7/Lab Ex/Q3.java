public class Q3 {
    public static void main(String[] args) {
        int i = 10;
        Integer I = i;

        char c = 'A';
        Character C = c;

        double d = 25.5;
        Double D = d;

        boolean b = true;
        Boolean B = b;

        float f = 12.3f;
        Float F = f;

        long l = 123456789L;
        Long L = l;

        byte y = 1;
        Byte Y = y;

        short s = 1000;
        Short S = s;

        int uI = I;
        char uC = C;
        double uD = D;
        boolean uB = B;
        float uF = F;
        long uL = L;
        byte uY = Y;
        short uS = S;

        System.out.println("Autoboxed and Unboxed values:");
        System.out.println("int: " + I + " -> " + uI);
        System.out.println("char: " + C + " -> " + uC);
        System.out.println("double: " + D + " -> " + uD);
        System.out.println("boolean: " + B + " -> " + uB);
        System.out.println("float: " + F + " -> " + uF);
        System.out.println("long: " + L + " -> " + uL);
        System.out.println("byte: " + Y + " -> " + uY);
        System.out.println("short: " + S + " -> " + uS);
    }
}
