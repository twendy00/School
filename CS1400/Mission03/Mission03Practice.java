import java.util.Random;
import java.util.Scanner;

public class Mission03Practice
{
  public static void main (String[] args)
  {
    Random r = new Random();

    int number1 = 0;

    number1 = r.nextInt(10);
    System.out.println(number1);

    for (int count = 1; count <= 15; count++)
      {
        System.out.println(count + " squared is " + (count*count));
      }

    Scanner in = new Scanner(System.in);

    double height = 0.0;
    String input = "";

    do {

    System.out.println("How tall are you (in inches)?");
    height = in.nextDouble();

    while (height < 0.0)
      {
        System.out.println("That is not a valid height.Try again.");
        height = in.nextDouble();
      }
      System.out.println("Valid Height.");
      in.nextLine();
      System.out.println("Press Q to quit or any key to continue");
      input = in.nextLine();
    } while (!input.equalsIgnoreCase("Q"));

  }
}
