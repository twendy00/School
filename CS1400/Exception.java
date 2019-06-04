import java.util.InputMismatchException;
import java.util.Scanner;

public class Exception {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int shoeSize = 0;
        boolean error = false;
        String[] hotterPlaces = { "Molten Lava", "The Sun", "Texas in July", "The Cornballer", "Hell" };

        System.out.println("What is your shoe size?");

        do {
            try {
                error = false;
                shoeSize = in.nextInt();
                System.out.println("My office is hot. How hot is it?");

                for (int i = 0; i <= 5; i++) {
                    System.out.println(hotterPlaces[i]);
                }
            } catch (InputMismatchException e) {
                error = true;
                System.out.println("Sorry, that was not a valid input.");
                System.out.println("Please re-enter the shoe size using numbers.");
                System.out.println(e.getMessage());
                in.nextLine();
                // shoeSize = in.nextInt();
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println(e.getMessage());
            }
        } while (error);
    }

}