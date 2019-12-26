import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class Mission07Tran {

    public static Random rand = new Random();
    public static Scanner scan = new Scanner(System.in);
    public static int[] tally = new int[11];

    public static void main(String[] args) {

        // Calls getRolls method and stores result in numRolls variable
        int numRolls = getRolls();

        // For loop based on the # of desired rolls
        // Calls on simulate method to tally roll results
        for (int i = 0; i < numRolls; i++) {
            simulate();
        }

        // For loop based on array length
        // Calls on histogram method and stores resuls in output variable
        // Calls on percentage method (nested) and passes percentage results as
        // parameters through histogram method
        // Prints output variable to display histogram
        // 2 is added to index i since lowest possible number is 2, which is in the 0
        // placeholder
        for (int i = 0; i < tally.length; i++) {
            String output = histogram('*', percentage(tally[i], numRolls));

            System.out.println((i + 2) + ": " + output);
        }
    }

    // Method to ask user the # of desired rolls and returns results
    public static int getRolls() {
        int numRolls = 0;

        System.out.println("Welcome to the dice throwing simulator!");
        System.out.println("How many dice rolls would you like to simulate?");

        numRolls = Integer.parseInt(scan.nextLine());

        if (numRolls == 0) {
            System.out.println("Looks like you don't want to roll any dice right now. Good bye.");
            System.exit(0);
        }
        return numRolls;
    }

    // Method that will randomly generate die 1 and die 2 rolls.
    // Sums the result and tallies into array by roll value.
    // Roll value is subtracted by 2 to align with the 0 index placeholder
    public static void simulate() {

        int die1 = 0;
        int die2 = 0;
        int diceSum = 0;

        die1 = rand.nextInt(6) + 1;
        die2 = rand.nextInt(6) + 1;
        diceSum = die1 + die2;

        tally[diceSum - 2]++;
    }

    // Method that calculates % of each roll value
    // Passes the roll value and number of rolls as parameters through method and
    // stores results
    public static double percentage(int rollValue, int numRolls) {

        return (rollValue * 100.0) / numRolls;
    }

    // Method that produces row of asterisks based on percentage
    // Passes in asterisk format and percentage as parameters through method
    // Includes for loop to add asterisk for each percent and returns results
    public static String histogram(char format, double percentage) {

        String asterisks = "";
        int count = (int) percentage;

        for (int i = 0; i < count; i++) {
            asterisks += format;
        }

        return asterisks;
    }
}
