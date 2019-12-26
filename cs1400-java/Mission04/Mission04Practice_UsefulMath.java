public class Mission04Practice_UsefulMath {

public int square (int number) {

  int result = 0;
  result = number * number;
  return result;
}

public int power (int num, int pow) {

  int result = 1;

  for (int i = 1; i <= pow; i++) {

    result = result * num;
  }
  return result;
}

}
