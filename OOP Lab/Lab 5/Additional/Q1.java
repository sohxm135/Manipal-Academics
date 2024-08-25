import java.util.Scanner;

class Result {
    int[][] marks = new int[3][3];
    int[] totalMarks = new int[3];

    public void storeMarks() {
        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            System.out.println("Enter marks for Roll No. " + (i + 1) + ":");
            for (int j = 0; j < 3; j++) {
                System.out.print("Subject " + (j + 1) + ": ");
                marks[i][j] = scanner.nextInt();
            }
        }
    }

    public void calculateTotalMarks() {
        for (int i = 0; i < 3; i++) {
            int sum = 0;
            for (int j = 0; j < 3; j++) {
                sum += marks[i][j];
            }
            totalMarks[i] = sum;
        }
    }

    public void highestMarksPerSubject() {
        for (int j = 0; j < 3; j++) {
            int highest = marks[0][j];
            int rollNo = 1;
            for (int i = 1; i < 3; i++) {
                if (marks[i][j] > highest) {
                    highest = marks[i][j];
                    rollNo = i + 1;
                }
            }
            System.out.println("Highest marks in Subject " + (j + 1) + ": " + highest + " by Roll No. " + rollNo);
        }
    }

    public void highestTotalMarks() {
        int highest = totalMarks[0];
        int rollNo = 1;
        for (int i = 1; i < 3; i++) {
            if (totalMarks[i] > highest) {
                highest = totalMarks[i];
                rollNo = i + 1;
            }
        }
        System.out.println("Highest total marks: " + highest + " by Roll No. " + rollNo);
    }
}

public class Q1 {
    public static void main(String[] args) {
        Result result = new Result();
        result.storeMarks();
        result.calculateTotalMarks();
        result.highestMarksPerSubject();
        result.highestTotalMarks();
    }
}
