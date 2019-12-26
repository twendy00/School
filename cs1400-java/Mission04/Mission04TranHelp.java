import java.util.Scanner;

public class Mission04TranHelp {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        String word = "computer";
        char ch = ' ';
        // int position = 0;
        // char vowels = {'a', 'e', 'i', 'o', 'u'};

        System.out.println("Enter a word");
        word = scan.nextLine();

        if (word.charAt(0) == 'a' || word.charAt(0) == 'e' || word.charAt(0) == 'i' || word.charAt(0) == '0'
                || word.charAt(0) == 'u') {
            System.out.println(word + "way");
        }
        /*
         * for (int i = 0; i < word.length(); i++) { temp = word.charAt(i);
         * 
         * if (temp == 'a') { System.out.println(word.substring(i) + word.substring(0,i)
         * + "ay"); break; } elseif }
         */
    }

}
