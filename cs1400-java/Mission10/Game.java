import java.util.Scanner;

public class Game
{

	public static void main (String[] args)
	{
		Scanner in = new Scanner (System.in);
		RockPaperScissors rps = new RockPaperScissors ();  //***Your class
				
		int numGames = 0;
		String userChoice = "";
		String cpuChoice = "";
		String winner = "";
		int userWins = 0;
		int cpuWins = 0;

		
		System.out.println("Welcome to Rock, Paper, Scissors!\n");
		
		//Get odd number of games
		System.out.println("How many rounds would you like to play?");
		numGames = in.nextInt();
		
		while (numGames % 2 == 0) //Even number
		{
			System.out.println("Sorry, number of games must be odd.  Please try again:");
			numGames = in.nextInt();
		}
		
		//Flush the buffer
		in.nextLine();
		
		//Play the game for the number of rounds the user entered
		for (int i = 1; i <= numGames; i++)
		{
			//Get the user and computer choices
			userChoice = rps.getUserChoice();  //***Your method
			cpuChoice = rps.getCPUChoice();   //***Your method
			
			System.out.println("Computer chooses " + cpuChoice);
			
			//Pick winner
			winner = rps.pickWinner(userChoice, cpuChoice);  //***Your method
			
			if (winner.equalsIgnoreCase("Tie"))
			{
				System.out.println("It's a tie!  Play again.");
				numGames++;
			}
			else
			{
				if (winner.equalsIgnoreCase("User"))
				{
					userWins++;
				}
				else if (winner.equalsIgnoreCase("Computer"))
				{
					cpuWins++;
				}
				else
				{
					System.out.println("Error in picking winner");
				}
				
				System.out.println(winner + " wins!");
			}
			
		} //end for
		
		//Print results
		System.out.println("\nUser wins: " + userWins);
		System.out.println("Computer wins: " + cpuWins);
		
		if (userWins > cpuWins)
		{
			System.out.println("\nThe user won!");
		}
		if (cpuWins > userWins)
		{
			System.out.println("The computer won!");
		}
		
		//Close game
		System.out.println("\nThank you for playing!");
		
	} //end main

} //end class