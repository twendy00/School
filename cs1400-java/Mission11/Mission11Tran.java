import java.util.Scanner;
import java.util.Random;
import java.text.DecimalFormat;
import java.lang.NumberFormatException;

public class Mission11Tran {
    public static void main(String[] args) {

        String name = "";
        int account = 0;
        int action = 0;
        String nextAction = "";
        boolean error = false;

        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        DecimalFormat df = new DecimalFormat("#.##");

        // Intro
        System.out.println("Welcome to the Tran Bank!");
        System.out.println("Please enter your name to create an account:");

        // Gathers name and randomly assigns account number.
        // Passes name & account through BankAccount constructor.
        name = scan.nextLine();
        account = rand.nextInt(100000);
        BankAccount b = new BankAccount(name, account);

        // Loop to ask for user's desired action.
        do {
            System.out.println("What would you like to do?");
            System.out.println("Press 1 to make a deposit.");
            System.out.println("Press 2 to make a withdrawal.");
            System.out.println("Press 3 to get account information.");
            System.out.println("Press 4 to quit.");
            // Loop to catch exceptions/invalid choices and re-ask user for choice
            do {
                try {
                    action = Integer.parseInt(scan.nextLine());

                    while (action != 1 && action != 2 && action != 3 && action != 4) {
                        System.out.println("Invalid choice. Please try again.");
                        action = Integer.parseInt(scan.nextLine());
                    }
                    error = false;
                } catch (NumberFormatException e) {
                    error = true;
                    System.out.println("Invalid choice. Please try again.");
                }
            } while (error);

            // Deposit option - asks user how much to deposit and calculates new balance
            if (action == 1) {
                System.out.println("How much would you like to deposit?");
                b.deposit(Double.parseDouble(scan.nextLine()));
                System.out.println("Current Balance: $" + df.format(b.getBalance()));
            }
            // Withdrawal action: asks user how much to withdraw and calculates new balance
            if (action == 2) {
                System.out.println("How much would you like to withdraw?");
                b.withdraw(Double.parseDouble(scan.nextLine()));
                System.out.println("Current Balance: $" + df.format(b.getBalance()));
            }
            // Account info - displays name, account number, and balance
            if (action == 3) {
                System.out.println("Name: " + name);
                System.out.println("Account #: " + account);
                System.out.println("Balance: $" + df.format(b.getBalance()));
            }
            // Ends program
            if (action == 4) {
                break;
            }
            // Asks if user wants to make another transaction. If yes, do while loop
            // continues. If not, program ends
            System.out.println("Would you like to make another transaction (yes/no)?");
            nextAction = scan.nextLine();

            while (!nextAction.equalsIgnoreCase("yes") && !nextAction.equalsIgnoreCase("no")) {
                System.out.println("Invalid choice. Please enter \"yes\" or \"no\".");
                nextAction = scan.nextLine();
            }

        } while (nextAction.equalsIgnoreCase("yes"));
        System.out.println("Good bye.");
    }
}