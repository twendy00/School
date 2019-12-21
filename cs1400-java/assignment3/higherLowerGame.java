import java.util.Random;
import java.util.Scanner;

public class Mission03Tran
{
  public static void main (String[] args)
  {
    Random r = new Random();
    Scanner scan = new Scanner(System.in);

    int guess = 0; // User's guess
    int random = 0; // Random number created by game that user must guess. Does not regenerate until start of new game.
    int count = 0; // Counts # of tries until user guesses correct number.

    random = r.nextInt(100) + 1; // Generates random number to be guessed

    System.out.println("Welcome to the High-Low Guessing game. Please try to guess a number between 1 and 100.");

    do
    {
      // Captures the user's guess & counts the number of tries. Increments by 1 for every try.
        System.out.println("Enter your guess:");
        guess = scan.nextInt();
        count++;

      // If user does not guess a number between 1 and 100, game will recognize it as an invalid number.
      // Game will not count invalid guesses as a try.
        while (guess < 1 || guess > 100)
          {
            System.out.println("Invalid input. Try again.");
            System.out.println("Guess a number between 1 and 100.");
            System.out.println("Enter your guess:");
            guess = scan.nextInt();
          }

      // Game will evaluate guess and advise if too high, too low, or number is correct.
        if (guess<random)
          {
            System.out.println("Too low! Guess again.");
          }
        else if (guess>random)
        {
          System.out.println("Too high! Guess again.");
        }
        else
        {
          System.out.println("Good guess. You were right! The number was " + random + ".");
        }

      // If guess is correct, loop will stop and game will end. Game will inform user on # of tries.
    } while (guess != random);
      System.out.println("It took you " + count + " tries. Thank you for playing.");

  }
}
