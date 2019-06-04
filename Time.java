class Time {

  public static void main(String[] args) {
    int hour = 9;
    int minute = 31;
    int second = 18;
    int day = 24 * 60 * 60;
    int secondsSinceMidnight = (hour * 60 * 60) + (minute * 60) + second;
    int secondsRemaining = (day - secondsSinceMidnight);
    System.out.println(secondsSinceMidnight);
    System.out.println(secondsRemaining);


    float hour1 = 9;
    float minute1 = 31;
    float second1 = 18;
    float day1 = 24 * 60 * 60;
    float secondsSinceMidnight1 = (hour * 60 * 60) + (minute * 60) + second;
    float percentDay = (secondsSinceMidnight/day1);
    System.out.println(percentDay * 100);

    int hour2 = 9;
    int minute2 = 45;
    int second2 = 51;
    int secondsBtwnTime = (hour2 - hour) * 60 + (minute2 - minute) * 60 + (second2 - second);
    System.out.println(secondsBtwnTime);
  }
}
