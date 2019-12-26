import java.util.*;

public class Monopoly {
    public static void main(String[] args) {

        Random r = new Random();

        int die1 = 0;
        int die2 = 0;
        int total = 0;
        int numWins = 0;
        int numLosses = 0;

        // Simulate the roll of the dice
        for (int i = 0; i < 1000; i++) {

            die1 = r.nextInt(6) + 1;
            die2 = r.nextInt(6) + 1;

            total = die1 + die2;

            // System.out.println("The total roll was: " + total);

            // Decide whether they win or lose

            if (total == 7 || total == 11) {
                // System.out.println("You win!");
                numWins++;
            } else {
                // System.out.println("You lose!");
                numLosses++;
            }
        }

        System.out.println("Wins: " + numWins);
        System.out.println("Losses: " + numLosses);

    }

}