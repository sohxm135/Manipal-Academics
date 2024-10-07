interface Item {
    double getTotalSales();
    void displayDetails();
}

class Hardware implements Item {
    private String category;
    private String manufacturer;
    private double salesLast3Months;

    public Hardware(String category, String manufacturer, double salesLast3Months) {
        this.category = category;
        this.manufacturer = manufacturer;
        this.salesLast3Months = salesLast3Months;
    }

    @Override
    public double getTotalSales() {
        return salesLast3Months;
    }

    @Override
    public void displayDetails() {
        System.out.println("Hardware Item:");
        System.out.println("Category: " + category);
        System.out.println("Manufacturer: " + manufacturer);
        System.out.println("Total Sales in Last 3 Months: $" + salesLast3Months);
    }
}

class Software implements Item {
    private String type;
    private String operatingSystem;
    private double salesLast3Months;

    public Software(String type, String operatingSystem, double salesLast3Months) {
        this.type = type;
        this.operatingSystem = operatingSystem;
        this.salesLast3Months = salesLast3Months;
    }

    @Override
    public double getTotalSales() {
        return salesLast3Months;
    }

    @Override
    public void displayDetails() {
        System.out.println("Software Item:");
        System.out.println("Type: " + type);
        System.out.println("Operating System: " + operatingSystem);
        System.out.println("Total Sales in Last 3 Months: $" + salesLast3Months);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Item hardwareItem = new Hardware("Laptop", "Dell", 15000);
        hardwareItem.displayDetails();
        System.out.println();

        Item softwareItem = new Software("Antivirus", "Windows", 5000);
        softwareItem.displayDetails();
        System.out.println();

        double totalSales = hardwareItem.getTotalSales() + softwareItem.getTotalSales();
        System.out.println("Total Sales of Hardware and Software in Last 3 Months: $" + totalSales);
    }
}
