import java.util.Scanner;

public class Echo {

  public static void main(String[] args) {
    String line;
    Scanner in = new Scanner(System.in);
    final double CM_PER_INCH =  2.54;

    System.out.print("Type something: ");
    line = in.nextLine();
    System.out.println("You said: " + line);

    System.out.print("Type something else: ");
    line = in.nextLine();
    System.out.println("You also said: " + line);

    System.out.print("How many inches? ");
    inch = in.nextInt();
    cm = inch * 2.54;
    System.out.print(inch + " in = ");
    System.out.println(cm + " cm");
    

    System.out.printf("Four Thirds = %.3f", 4.0/3.0);

    inch = (int) (cm / CM_PER_INCH);
    System.out.printf("%f cm = %d in\n", cent, inch);
  }
}
