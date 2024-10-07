class Student_Detail {
    String name;
    int id;
    static String college_name = "MIT";

    public Student_Detail(String name, int id) {
        this.name = name;
        this.id = id;
    }

    public void display_details() {
        System.out.println("Student Name: " + name);
        System.out.println("Student ID: " + id);
        System.out.println("College Name: " + college_name);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Student_Detail student1 = new Student_Detail("Alice", 101);
        Student_Detail student2 = new Student_Detail("Bob", 102);

        System.out.println("Student 1 Details:");
        student1.display_details();
        System.out.println();

        System.out.println("Student 2 Details:");
        student2.display_details();
    }
}
