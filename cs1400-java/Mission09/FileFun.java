import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.File;
import java.io.PrintWriter;

public class FileFun {
    public static void main(String[] args) {

        try {
            PrintWriter fileOut = new PrintWriter("/Users/wendalyntran/Code/Java/CS1400/output.txt");
            fileOut.println("Just printed some text to a file.");
            fileOut.println("Here's more text.");
            fileOut.close();
            // File f = new File("/Users/wendalyntran/Code/Java/CS1400/test.txt");
            // Scanner fileIn = new Scanner(f);

            // String line = "";
            // String word = "";
            // int count = 0;

            // while (fileIn.hasNext()) {
            // word = fileIn.next();
            // count++;
            // System.out.println(word);
            // System.out.println("# Words: " + count);
            // }

            // word = fileIn.next();
            // System.out.println(word);

            // word = fileIn.next();
            // System.out.println(word);

            // line = fileIn.nextLine();
            // System.out.println(line);

            // line = fileIn.nextLine();
            // System.out.println(line);
        } catch (

        FileNotFoundException e) {
            System.out.println("Sorry. Bad file name.");
        }

    }

}
