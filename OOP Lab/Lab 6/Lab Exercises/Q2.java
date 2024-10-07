class Student {
    protected String registrationNumber;
    protected String name;
    protected int age;

    public Student(String registrationNumber, String name, int age) {
        this.registrationNumber = registrationNumber;
        this.name = name;
        this.age = age;
    }

    public void displayDetails() {
        System.out.println("Registration Number: " + registrationNumber);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class UGStudent extends Student {
    private int semester;
    private double fees;
    private static int ugCount = 0; // count UG 

    public UGStudent(String registrationNumber, String name, int age, int semester, double fees) {
        super(registrationNumber, name, age);
        this.semester = semester;
        this.fees = fees;
        ugCount++;
    }

    public void displayDetails() {
        super.displayDetails();
        System.out.println("Semester: " + semester);
        System.out.println("Fees: " + fees);
    }

    public static int getUGCount() {
        return ugCount;
    }
}

class PGStudent extends Student {
    private int semester;
    private double fees;
    private static int pgCount = 0; 

    public PGStudent(String registrationNumber, String name, int age, int semester, double fees) {
        super(registrationNumber, name, age);
        this.semester = semester;
        this.fees = fees;
        pgCount++;
    }

    public void displayDetails() {
        super.displayDetails();
        System.out.println("Semester: " + semester);
        System.out.println("Fees: " + fees);
    }

    public static int getPGCount() {
        return pgCount;
    }
}

public class Q2 {
    public static void main(String[] args) {
        // Create UG students
        UGStudent ugStudent1 = new UGStudent("UG101", "Alice", 18, 1, 50000);
        UGStudent ugStudent2 = new UGStudent("UG102", "Bob", 19, 3, 52000);

        // Create PG students
        PGStudent pgStudent1 = new PGStudent("PG101", "Charlie", 23, 1, 70000);
        PGStudent pgStudent2 = new PGStudent("PG102", "David", 24, 2, 75000);

        // Display UG students' details
        System.out.println("UG Students:");
        ugStudent1.displayDetails();
        System.out.println();
        ugStudent2.displayDetails();
        System.out.println();

        // Display PG students' details
        System.out.println("PG Students:");
        pgStudent1.displayDetails();
        System.out.println();
        pgStudent2.displayDetails();
        System.out.println();

        // Display the total number of UG and PG admissions
        System.out.println("Total UG Admissions: " + UGStudent.getUGCount());
        System.out.println("Total PG Admissions: " + PGStudent.getPGCount());
    }
}
