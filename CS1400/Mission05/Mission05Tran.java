import java.util.Scanner;
import java.util.Random;

public class Mission05Tran {

  public static Scanner scan = new Scanner(System.in);
  public static Random rand = new Random();

  public static void main(String[] args) {

    // Lists out variables
    int games = 0;
    String userMove = "";
    String computerMove = "";
    int computerWins = 0;
    int userWins = 0;

    // Introduces game. Calls getNumGames to get number of games user wants to play
    System.out.println("Welcome to the Rock, Paper, Scissors Game!");

    games = getNumGames();

    // For loop to count # of games played
    for (int count = 1; count <= games; count++) {

      // Calls getComputerMove and getUserMove to randomly assign computer move &
      // gather user's desired move
      computerMove = getComputerMove();
      userMove = getUserMove();

      // If computer and user move are the same, calls both methods again to replay
      // round
      while (userMove.equalsIgnoreCase(computerMove)) {
        System.out.println("It's a tie. Let's try again.");
        computerMove = getComputerMove();
        userMove = getUserMove();
      }

      // Series of if statements to evaluate who will win based off of computer & user
      // moves
      // Counts # of wins for both computer and user
      if (computerMove.equalsIgnoreCase("rock") && userMove.equalsIgnoreCase("scissors")) {
        System.out.println("Rock beats scissors. The computer wins and you lose this round!");
        computerWins++;
      }
      if (computerMove.equalsIgnoreCase("paper") && userMove.equalsIgnoreCase("rock")) {
        System.out.println("Paper beats rock. The computer wins and you lose this round!");
        computerWins++;
      }
      if (computerMove.equalsIgnoreCase("scissors") && userMove.equalsIgnoreCase("paper")) {
        System.out.println("Scissors beat paper. The computer wins and you lose this round!");
        computerWins++;
      }
      if (userMove.equalsIgnoreCase("rock") && computerMove.equalsIgnoreCase("scissors")) {
        System.out.println("Rock beats scissors. You win and the computer loses this round!");
        userWins++;
      }
      if (userMove.equalsIgnoreCase("paper") && computerMove.equalsIgnoreCase("rock")) {
        System.out.println("Paper beats rock. You win and the computer loses this round!");
        userWins++;
      }
      if (userMove.equalsIgnoreCase("scissors") && computerMove.equalsIgnoreCase("paper")) {
        System.out.println("Scissors beat paper. You win and the computer loses this round!");
        userWins++;
      }
    }

    // Annouces the number of rounds won by computer and user
    System.out.println("User wins: " + userWins);
    System.out.println("Computer wins: " + computerWins);

    // Announces the final winner
    if (userWins > computerWins) {
      System.out.println("You won the most games! Come back soon to play more!");
    } else {
      System.out.println("The computer won the most games! We hope you try again.");
    }
  }

  // Method to get number of games user wants to play and stores output
  public static int getNumGames() {
    int num = 0;

    // Asks # of games
    System.out.println("How many games would you like to play?");
    num = Integer.parseInt(scan.nextLine());

    // While loop to make sure that response is not even
    while (num % 2 == 0) {
      // If response is both even and 0, game will end.
      if (num == 0) {
        System.out.println("It doesn't look like you want to play any games. Maybe later. Goodbye!");
        System.exit(0);
      }
      // If response is even, game will prompt user to enter in an odd number of games
      if (num != 0) {
        System.out.println("Only an odd number of games can be played to prevent ties.");
        System.out.println("Please enter an odd number of games to play.");
        num = Integer.parseInt(scan.nextLine());
      }
    }
    // If response is odd, number is stored and game continues
    if (num == 1) {
      System.out.println("Great! Let's play " + num + " game.");
    } else {
      System.out.println("Great! Let's play " + num + " games.");
    }
    return num;
  }

  // Method to randomly assign computer's move
  public static String getComputerMove() {
    String move = "";
    int num = 0;

    // Randomly assigns number
    num = rand.nextInt(3) + 1;
    // Switches number to actual rock, paper, scissors & stores output
    switch (num) {
    case 1:
      move = "rock";
      break;
    case 2:
      move = "paper";
      break;
    case 3:
      move = "scissors";
      break;
    default:
      break;
    }
    return move;
  }

  // Method to gather user's move
  public static String getUserMove() {
    String move = "";

    // Asks user their choice & stores it
    System.out.println("Rock, paper, or scissors?");
    move = scan.nextLine();

    // While loop to ensure that user's choice is valid. Prompts user to make new
    // choice if invalid
    // If valid, user's choice is stored
    while (!move.equalsIgnoreCase("rock") && !move.equalsIgnoreCase("paper") && !move.equalsIgnoreCase("scissors")) {
      System.out.println("Sorry, " + move + " is not a valid choice.");
      System.out.println("You can only choose rock, paper, or scissors. Try again.");
      move = scan.nextLine();
    }
    return move;
  }

}
