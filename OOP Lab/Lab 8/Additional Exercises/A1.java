abstract class Shape {
    abstract void computeArea();
}

class Square extends Shape {
    private double side;

    public Square(double side) {
        this.side = side;
    }

    @Override
    void computeArea() {
        double area = side * side;
        System.out.println("Area of the Square: " + area);
    }
}

class Triangle extends Shape {
    private double base;
    private double height;

    public Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    void computeArea() {
        double area = 0.5 * base * height;
        System.out.println("Area of the Triangle: " + area);
    }
}

public class A1 {
    public static void main(String[] args) {
        Shape square = new Square(4);
        square.computeArea();

        Shape triangle = new Triangle(5, 3);
        triangle.computeArea();
    }
}
