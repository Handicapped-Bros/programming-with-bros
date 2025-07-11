package b1tranger.JAVA.learning;

import java.util.Scanner;

public class StringInputOutput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Output - prompting user for input
        System.out.print("Enter your name: ");

        // Input - reading string from user
        String name = scanner.nextLine();

        System.out.print("Enter your favorite color: ");
        String color = scanner.nextLine();

        System.out.print("Enter your age: ");
        String age = scanner.nextLine();

        // Output - displaying the collected information
        System.out.println("\n--- Your Information ---");
        System.out.println("Name: " + name);
        System.out.println("Favorite Color: " + color);
        System.out.println("Age: " + age);

        // String manipulation examples
        System.out.println("\n--- String Operations ---");
        System.out.println("Name in uppercase: " + name.toUpperCase());
        System.out.println("Name length: " + name.length());
        System.out.println("First character of name: " + name.charAt(0));

        scanner.close();
    }
}