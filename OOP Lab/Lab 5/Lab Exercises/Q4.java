public class Q4 {
    public static void main(String[] args) {
        Complex c1 = new Complex(3, 4);
        Complex c2 = new Complex(2, 5);

        System.out.println("Complex number 1:");
        c1.display();
        System.out.println("Complex number 2:");
        c2.display();

        System.out.println("Add 5 to complex number 1:");
        Complex c3 = c1.add(5, c1);
        c3.display();

        System.out.println("Add complex number 2 to complex number 1:");
        Complex c4 = c1.add(c1,c2);
        c4.display();
    }
}


 class Complex {
    double real;
    double imaginary;

    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }

    public Complex add(int num, Complex complex) {
        return new Complex(this.real + num, this.imaginary);
    }

    public Complex add(Complex c1, Complex c2) {
        return new Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
    }

    public void display() {
        System.out.println(real + " + " + imaginary + "i");
    }

}