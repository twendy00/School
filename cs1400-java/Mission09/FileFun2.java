import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;

public class FileFun2 {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        File f;
        Scanner fileIn;

        String fileName = "";
        ArrayList<String> words = new ArrayList<String>();

        try {
            PrintWriter fileOut = new PrintWriter("/Users/wendalyntran/Code/Java/CS1400/Backwards.txt");

            System.out.println("Please enter the name of the file " + " you want to print out backwards");

            fileName = in.nextLine();

            f = new File(fileName);
            fileIn = new Scanner(f);

            while (fileIn.hasNext()) {
                words.add(fileIn.next());
            }
            for (int i = words.size() - 1; i >= 0; i--) {
                fileOut.print(words.get(i) + " ");
            }
            fileOut.close();

        } catch (FileNotFoundException e) {
            System.out.println("Sorry, file not found.");
        }
    }
}