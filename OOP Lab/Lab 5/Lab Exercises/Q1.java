
  class Box {
    double width;
    double height;
    double depth;

    public Box(double width, double height, double depth) {
        this.width = width;
        this.height = height;
        this.depth = depth;
    }

    public double getVolume() {
        return width * height * depth;
    }
    
}

public class Q1 {
    public static void main(String[] args) {
        Box box = new Box(10.0, 20.0, 30.0);
        System.out.println("The volume of the box is: " + box.getVolume());
    }
}

