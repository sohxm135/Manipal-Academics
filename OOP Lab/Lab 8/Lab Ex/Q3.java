interface Shape {
    void computeArea();
}

class Rectangle implements Shape {
    private double length;
    private double width;

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public void computeArea() {
        double area = length * width;
        System.out.println("Area of the Rectangle: " + area);
    }
}

class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public void computeArea() {
        double area = Math.PI * radius * radius;
        System.out.println("Area of the Circle: " + area);
    }
}

public class Q3 {
    public static void main(String[] args) {
        Shape rectangle = new Rectangle(5, 3);
        rectangle.computeArea();

        Shape circle = new Circle(4);
        circle.computeArea();
    }
}
