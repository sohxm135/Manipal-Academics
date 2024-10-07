class Bike {
    int speedlimit = 90;

    public void run() {
        System.out.println("Bike is running with a speed limit of " + speedlimit + " km/h");
    }
}

class Splendar extends Bike {
    int speedlimit = 60;

    @Override
    public void run() {
        System.out.println("Splendar is running with a speed limit of " + speedlimit + " km/h");
    }
}

public class A2 {
    public static void main(String[] args) {
        Bike bike = new Bike();
        bike.run(); // Calls Bike's run method and uses Bike's speedlimit

        Bike splendar = new Splendar();
        splendar.run(); // Calls Splendar's run method and uses Splendar's speedlimit

        System.out.println("Bike's speed limit: " + bike.speedlimit);
        System.out.println("Splendar's speed limit through Bike reference: " + splendar.speedlimit);
    }
}
