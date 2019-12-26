import java.text.DecimalFormat;
import java.util.*;

public class Mission08Tran {

    public static Scanner scan = new Scanner(System.in);
    public static DecimalFormat df = new DecimalFormat("#.#");
    public static double height = 0;
    public static double weight = 0;

    public static void main(String[] args) {
        double numerator = 0;
        double denominator = 0;
        double bmi = 0;

        // Intro to BMI calculator
        System.out.println("Welcome to the Body Mass Index Calculator!");
        System.out.println("Your height and weight is needed to calculate your BMI.");
        System.out.println("What is your height in inches?");

        // Calls on getHeight and getWeight methods and stores results
        height = getHeight();
        weight = getWeight();

        // Prints out user's height and weight
        System.out.println("Your height is " + height + " inches.");
        System.out.println("Your weight is " + weight + " pounds.");

        // Calculates and stores user's BMI based off of height and weight results
        // Then prints out user's BMI
        numerator = (704 * weight);
        denominator = height * height;

        bmi = numerator / denominator;
        System.out.println("Your BMI is " + df.format(bmi) + ".");
    }

    // Method with do while loop - asks user for height input until acceptable
    // format is entered
    // If unacceptable height is entered, then error is caught and loops back for
    // user to enter in height again
    // positiveHeight method is called to ensure height is positive. If not, error
    // is caught and loops back
    public static double getHeight() {

        boolean error = false;

        do {
            try {
                error = false;
                height = Double.parseDouble(scan.nextLine());
                positiveHeight();
            } catch (NumberFormatException e) {
                error = true;
                System.out.println("Invalid height. Height must be a decimal number.");
                System.out.println("Please re-enter your height as a decimal number.");
                // System.out.println(e.getMessage());
            } catch (IllegalArgumentException e) {
                error = true;
                System.out.println("Invalid height. Height must be positive.");
                System.out.println("Please re-enter your height as a positive number.");
            }
        } while (error);

        return height;
    }

    // Method with do while loop - asks user for weight input until acceptable
    // format is entered
    // If unacceptable weight is entered, then error is caught and loops back for
    // user to enter in weight again
    // positiveWeight method is called to ensure weight is positive. If not, error
    // is caught and loops back
    public static double getWeight() {
        System.out.println("What is your weight in pounds?");
        boolean error = false;

        do {
            try {
                error = false;
                weight = Double.parseDouble(scan.nextLine());
                positiveWeight();
            } catch (NumberFormatException e) {
                error = true;
                System.out.println("Invalid weight. Weight must be a decimal number.");
                System.out.println("Please re-enter your weight as a decimal number.");
            } catch (IllegalArgumentException e) {
                error = true;
                System.out.println("Invalid weight. Weight must be positive.");
                System.out.println("Please re-enter your weight as a positive number.");
            }
        } while (error);
        return weight;
    }

    // Method to check if height is positive. If not, then throws out exception
    // error
    public static void positiveHeight() {
        boolean error = false;

        if (height <= 0) {
            error = true;
            throw new IllegalArgumentException("Non-positive number");
        } else {
            error = false;
        }
    }

    // Method to check if weight is positive. If not, then throws out exception
    // error
    public static void positiveWeight() {
        boolean error = false;

        if (weight <= 0) {
            error = true;
            throw new IllegalArgumentException("Non-positive number");
        } else {
            error = false;
        }
    }

}