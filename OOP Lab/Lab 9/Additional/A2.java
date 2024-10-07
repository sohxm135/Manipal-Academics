import java.util.Scanner;

class Student {
    String regNumber, firstName, lastName, degree;

    public Student(String regNumber, String firstName, String lastName, String degree) {
        this.regNumber = regNumber;
        this.firstName = firstName;
        this.lastName = lastName;
        this.degree = degree;
    }

    public void displayDetails() {
        System.out.println(regNumber + " " + firstName + " " + lastName + " " + degree);
    }
}

public class A2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        Student[] students = {
            new Student("01", "John", "Smith", "CS"),
            new Student("02", "Emily", "Jones", "IT"),
            new Student("03", "Michael", "Brown", "ME"),
            new Student("04", "Anna", "Davis", "CS"),
            new Student("05", "James", "Wilson", "EC"),
            new Student("06", "Sophia", "Moore", "IT"),
            new Student("07", "David", "Taylor", "CS"),
            new Student("08", "Olivia", "Anderson", "ME"),
            new Student("09", "Daniel", "Lee", "EC"),
            new Student("10", "Emma", "White", "CS")
        };

        System.out.println("Enter First Name or Last Name to search:");
        String searchName = scanner.nextLine();

        for (Student student : students) {
            if (student.firstName.equalsIgnoreCase(searchName) || student.lastName.equalsIgnoreCase(searchName)) {
                student.displayDetails();
            }
        }
    }
}
