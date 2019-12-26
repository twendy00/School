import java.util.Scanner;

public class Mission02Tran
{

  public static void main (String[] args)
  {
    Scanner scan = new Scanner(System.in);

      // Asks user for their name
      System.out.println("Hello there! What is your name?");
      String name = scan.nextLine();

      // Asks user for their destination
      System.out.println("Hi " + name + ", where are you going?");
      String destination = scan.nextLine();

      // Asks user where they are coming from
      System.out.println("Where are you leaving from?");
      String departure = scan.nextLine();

      // Asks user the distance between their departure location and destination
      System.out.println("How many miles is it to " + destination + " from "
        + departure + "?");
      double miles = scan.nextDouble();

      // Asks user the speed limit between their departure location and destination
      System.out.println("What is the speed limit (in mph)?");
      double speed = scan.nextDouble();

      // Asks user how fast they intend to travel over the speed limit
      System.out.println("How fast do you plan on driving over the speed limit (in mph)?");
      double speedOver = scan.nextDouble();

      // Calculates the time (hours) it would take to travel from the departure
      // location to destination at the speed limit
      double timeHours = miles/speed;
      System.out.print("If you traveled at the speed limit of " + speed + " mph, it would take you "
        + timeHours + " hours ");

      // Calculates the time (minutes) it would take to travel from the departure
      // location to destination at the speed limit
      double minutesInHour = 60;

      double timeMinutes = timeHours * minutesInHour;
      System.out.println("or " + timeMinutes + " minutes.");

      // Calculates the time (hours) it would take to travel from the departure
      // location to destination at the higher speed
      double timeHoursOver = miles/(speed + speedOver);
      System.out.print("By traveling " + speedOver + " mph over the speed limit, it would take you "
        + timeHoursOver + " hours ");

      // Calculates the time (minutes) it would take to travel from the departure
      // location to destination at the higher speed
      double timeMinutesOver = timeHoursOver * minutesInHour;
      System.out.println("or " + timeMinutesOver + " minutes instead.");

      // Calculates the time savings in hours and minutes by speeding
      double differenceHours = timeHours - timeHoursOver;
      double differenceMinutes = timeMinutes - timeMinutesOver;

      System.out.println("So if you speed " + speedOver + " mph over the speed limit, you will save "
        + differenceHours + " hours or " + differenceMinutes + " minutes.");
  }
}
