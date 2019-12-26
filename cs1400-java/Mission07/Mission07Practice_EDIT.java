import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class Mission07Practice_EDIT {

    public static Random generator = new Random();
    public static Scanner scan = new Scanner(System.in);
    public static int[] rollCounts = new int[11];

    public static void main(String[] args) {
        int numRolls = askNumRolls();
        for (int i = 0; i < numRolls; i++) {
            simulate();
        }
        for (int i = 0; i < rollCounts.length; i++) {
            String output = histogram('*', percentage(rollCounts[i], numRolls));
            System.out.println((i + 2) + ": " + output);
            // System.out.println((i + 2) + ": " + percentage(rollCounts[i], numRolls));
            // Above line can be used to verify percentages
        }
    }

    double var = 100.3;

    public static int askNumRolls() {
        int numRolls = 0;
        System.out.println("Welcome to the dice throwing simulator!");
        System.out.println("How many dice rolls would you like to simulate?");
        numRolls = Integer.parseInt(scan.nextLine());
        return numRolls;
    }

    public static void simulate() {
        int die1 = generator.nextInt(6) + 1;
        int die2 = generator.nextInt(6) + 1;
        int diceSum = die1 + die2;
        rollCounts[diceSum - 2]++;
    }

    public static double percentage(int rollValue, int numRolls) {
        return (rollValue * 100.0) / numRolls;
    }

    public static String histogram(char formatChar, double percentage) {
        String row = "";
        int count = (int) percentage;
        for (int i = 0; i < count; i++) {
            row += formatChar;
        }
        return row;
    }

}