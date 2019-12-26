import java.util.Scanner;

public class Mission04TranTest {

  public static void main(String[] args) {

      Scanner scan = new Scanner (System.in);

      //Lists out variables
      String word = "";
      String vowels = "aeiouAEIOU";
      String begWord = "";
      String endWord = "";
      String playagain = "";

      //Introduces Pig Latin translator and asks user for word to translate
      System.out.println("Welcome to the Pig Latin translator!");

      //Do loop to translate words into pig latin until user wants to quit.
      do {
        System.out.println("What word do you want to translate into Pig Latin?");
        word = scan.nextLine();
      //Determines if first letter is a vowel. If so, takes word & adds way at end.
      if (vowels.contains(word.charAt(0) +"")) {
          System.out.println("The Pig Latin translation is: " + word + "way");
        }
      //If not, then finds first vowel.
      //Takes any consonants before first vowel and adds ay afterwards.
      //Then moves the consonants and ay to end of word.
        else {
        for (int i = 0; i < word.length(); i++) {
            if (vowels.contains(word.charAt(i) +"")) {
                begWord = word.substring(0, i);
                endWord = word.substring(i);
                System.out.println("The Pig Latin translation is: " + endWord + begWord + "ay");
                break;
            }
          }
        }
      //Asks if player would like to translate another word and stores input.
      System.out.println("Do you want to translate another word?");
      playagain = scan.nextLine();
      //If player enters in no, loop will break and translator will stop.
    } while (!playagain.equalsIgnoreCase("no"));
      System.out.println("Thanks for translating. Come back again.");
  }
}
