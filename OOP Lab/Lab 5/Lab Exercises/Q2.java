import  java.util.Scanner;
 class Employee {
    String name;
    String city;
    double basicSalary;
    double da; // dearness allowance
    double hra; // house rent allowance
    double totalSalary;

    public void getdata() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter employee name: ");
        name = scanner.nextLine();
        System.out.print("Enter city: ");
        city = scanner.nextLine();
        System.out.print("Enter basic salary: ");
        basicSalary = scanner.nextDouble();
        System.out.print("Enter dearness allowance (DA%): ");
        da = scanner.nextDouble();
        System.out.print("Enter house rent allowance (HRA%): ");
        hra = scanner.nextDouble();
    }

    public void calculate() {
        totalSalary = basicSalary + (basicSalary * da / 100) + (basicSalary * hra / 100);
    }

    public void display() {
        System.out.println("----------Employee---Information----------");
        System.out.println("Employee Name: " + name);
        System.out.println("City: " + city);
        System.out.println("Basic Salary: " + basicSalary);
        System.out.println("Dearness Allowance (DA%): " + da);
        System.out.println("House Rent Allowance (HRA%): " + hra);
        System.out.println("Total Salary: " + totalSalary);
    }
}

public class Q2 {
    public static void main(String[] args) {
        Employee employee = new Employee();
        employee.getdata();
        employee.calculate();
        employee.display();
    }
}