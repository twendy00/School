import java.util.Scanner;
import java.util.Random;

public class RockPaperScissors {

    // Method to gather user's choice
    public String getUserChoice() {

        Scanner scan = new Scanner(System.in);

        String userChoice = "";

        System.out.println("Do you choose rock, paper or scissors?");
        userChoice = scan.nextLine();

        while (!userChoice.equalsIgnoreCase("rock") && !userChoice.equalsIgnoreCase("paper")
                && !userChoice.equalsIgnoreCase("scissors")) {
            System.out.println("Sorry, that is not a valid choice. Please try again.");
            System.out.println("Rock, paper or scissors?");
            userChoice = scan.nextLine();
        }

        return userChoice;
    }

    // Method to randomly assign computer's move
    public String getCPUChoice() {

        Random rand = new Random();

        String cpuChoice = "";
        int num = 0;

        // Randomly assigns number
        num = rand.nextInt(3) + 1;
        // Switches number to actual rock, paper, scissors & stores output
        switch (num) {
        case 1:
            cpuChoice = "rock";
            break;
        case 2:
            cpuChoice = "paper";
            break;
        case 3:
            cpuChoice = "scissors";
            break;
        default:
            break;
        }
        return cpuChoice;
    }

    // Method to determine who is the winner.
    public String pickWinner(String userChoice, String cpuChoice) {

        String winner = "";

        // Series of if statements to evaluate who will win based off of computer & user
        // moves. Saves winner results.
        if (cpuChoice.equalsIgnoreCase("rock") && userChoice.equalsIgnoreCase("scissors")) {
            winner = "Computer";
        }
        if (cpuChoice.equalsIgnoreCase("paper") && userChoice.equalsIgnoreCase("rock")) {
            winner = "Computer";
        }
        if (cpuChoice.equalsIgnoreCase("scissors") && userChoice.equalsIgnoreCase("paper")) {
            winner = "Computer";
        }
        if (userChoice.equalsIgnoreCase("rock") && cpuChoice.equalsIgnoreCase("scissors")) {
            winner = "User";
        }
        if (userChoice.equalsIgnoreCase("paper") && cpuChoice.equalsIgnoreCase("rock")) {
            winner = "User";
        }
        if (userChoice.equalsIgnoreCase("scissors") && cpuChoice.equalsIgnoreCase("paper")) {
            winner = "User";
        }
        if (userChoice.equalsIgnoreCase(cpuChoice)) {
            winner = "tie";
        }

        return winner;
    }
}