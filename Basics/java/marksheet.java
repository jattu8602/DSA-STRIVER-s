import java.util.Scanner;

public class marksheet{
    public static void main(String[] args) {
        int marks=54;


        char grade;

        if (marks < 25) {
            grade = 'F';
        } else if (marks <= 44) {
            grade = 'E';
        } else if (marks <= 49) {
            grade = 'D';
        } else if (marks <= 59) {
            grade = 'C';
        } else if (marks <= 69) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'A';
        } else {
            grade = 'X'; // Use 'X' to indicate invalid marks
        }

        System.out.println("Grade: " + grade);
   
    }
}