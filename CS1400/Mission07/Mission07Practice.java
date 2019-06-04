import java.util.Random;
import java.util.Scanner;
import java.util.Arrays;

public class Mission07Practice {

    public static Random rand = new Random();
    public static Scanner scan = new Scanner(System.in);
    public static int[] tally = new int[11];

    public static void main(String[] args) {
        diceSumList = simulate();
        System.out.println(diceSumList);

        for (int i = 1; i <= (diceSumList.size() + 1); i++) {

            // System.out.println(diceSumList.size());
            // for (int j = 1; j <= tally.length; j++) {

            tally[diceSumList.get(i)]++;

            System.out.println(i + ":");
            // }
        }
    }

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

    public static ArrayList<Integer> simulate() {

        int rolls = 0;
        int dice1 = 0;
        int dice2 = 0;
        int diceSum = 0;

        rolls = getRolls();
        System.out.println("Alright, let's roll the dice " + rolls + " times.");

        for (int i = 1; i <= rolls; i++) {
            dice1 = rand.nextInt(6) + 1;
            dice2 = rand.nextInt(6) + 1;
            diceSum = dice1 + dice2;

            diceSumList.add(diceSum);

            System.out.println(dice1);
            System.out.println(dice2);
            System.out.println(diceSum);

        }

        return diceSumList;
    }

    /*
     * public static ArrayList<Integer> possibleOutcomes() { ArrayList<Integer>
     * outcomes = new ArrayList<>();
     *
     * for (int i = 2; i <= 12; i++) { // make the outcomes more variable based on
     * dice sides outcomes.add(i); } return outcomes; }
     */

}

// list out outcomes in table
// if statement and contains to categorize
// total # of outcomes
// figure out how to do it as 1% of outcomes
// divide and put it back into another variable to display
// for loop to display?