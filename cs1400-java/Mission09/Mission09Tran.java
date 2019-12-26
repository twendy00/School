import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.File;
import java.io.PrintWriter;

public class Mission09Tran {

    // Declares global classes and variables
    public static Scanner scan = new Scanner(System.in);
    public static File f;
    public static Scanner fileIn;
    public static String fileConvert = "";

    public static void main(String[] args) {

        String convertAgain = "";

        // Introduces encrypter/decrypter program
        System.out.println("Welcome to the File Encrypter/Decrypter!");

        // Do while loop to determine if user wants to encrypt or decrypt a file
        // Runs getFileConvert method to gather user's choice
        // Depending on the user's choice, etiher the encryptFile or decryptFile method
        // will be called
        // After the files have been converted, program will ask user if they'd like to
        // convert another file. If so, loop restarts. If not, program ends.
        do {
            getFileConvert();
            if (fileConvert.equalsIgnoreCase("encrypt")) {
                encryptFile();
            }
            if (fileConvert.equalsIgnoreCase("decrypt")) {
                decryptFile();
            }
            System.out.println("Would you like to convert another file?");
            convertAgain = scan.nextLine();
        } while (convertAgain.equalsIgnoreCase("yes"));
    }

    // Method to determine if user would like to encrypt or decrypt a file.
    // Runs validConvert method to ensure that user's input is a valid choice.
    // If not, catch exception runs and asks user their choice again.
    public static String getFileConvert() {
        boolean error = false;

        do {
            try {
                error = false;
                System.out.println("Would you like to encrypt or decrypt?");
                fileConvert = scan.nextLine();
                validConvert();
            } catch (IllegalArgumentException e) {
                error = true;
                System.out.println("That is not a valid choice. Please select encrypt or decrypt.");
            }
        } while (error);

        return fileConvert;
    }

    // Method to determine if user's input is valid or invalid.
    public static void validConvert() {
        boolean error = false;

        if (!fileConvert.equalsIgnoreCase("encrypt") && !fileConvert.equalsIgnoreCase("decrypt")) {
            error = true;
            throw new IllegalArgumentException("Must be encrypt or decrypt.");
        } else {
            error = false;
        }
    }

    // Method to gather the file that the user wants to encrypt or decrypt
    // If file isn't valid, then the exception error runs.
    public static void getFileName() {
        boolean error = false;
        String fileName = "";

        do {
            try {
                error = false;
                System.out.println("What is the name of your file?");
                fileName = scan.nextLine();

                f = new File(fileName);
                fileIn = new Scanner(f);
            } catch (FileNotFoundException e) {
                error = true;
                System.out.println("Sorry, file not found. Please try again.");
            }
        } while (error);
    }

    // Method to encrypt file.
    // Runs getFileName method to gather file name.
    // Uses while loop to determine file length and runs until there are no more
    // remaining lines. Creates line break between iterations.
    // Uses for loop to increase character by 1 for every letter character. Results
    // print to output file. Prints original character if not a letter.
    // After loops run, output file is closed and user is informed of file name.
    public static void encryptFile() {
        char chars = ' ';
        String line = "";

        try {
            getFileName();
            PrintWriter fileOut = new PrintWriter("/Users/wendalyntran/Code/Java/CS1400/Mission09/encrypted.txt");
            while (fileIn.hasNextLine()) {
                line = fileIn.nextLine();
                for (int i = 0; i < line.length(); i++) {
                    chars = line.charAt(i);
                    if (Character.isLetter(chars)) {
                        chars++;
                        fileOut.print(chars++);
                    } else {
                        fileOut.print(chars);
                    }
                }
                fileOut.print("\n");
            }
            fileOut.close();
            System.out.println("Your file has been saved as encrypted.txt.");
        } catch (FileNotFoundException e) {
            System.out.println("Sorry, file not found. Please try again.");
        }
    }

    // Method to decrypt file.
    // Runs getFileName method to gather file name.
    // Uses while loop to determine file length and runs until there are no more
    // remaining lines. Creates line break between iterations.
    // Uses for loop to decrease character by 1 for every letter character. Results
    // print to output file. Prints original character if not a letter.
    // After loops run, output file is closed and user is informed of file name.
    public static void decryptFile() {
        char chars = ' ';
        String line = "";

        try {
            getFileName();
            PrintWriter fileOut = new PrintWriter("/Users/wendalyntran/Code/Java/CS1400/Mission09/decrypted.txt");
            while (fileIn.hasNextLine()) {
                line = fileIn.nextLine();
                for (int i = 0; i < line.length(); i++) {
                    chars = line.charAt(i);
                    if (Character.isLetter(chars)) {
                        chars--;
                        fileOut.print(chars--);
                    } else {
                        fileOut.print(chars);
                    }
                }
                fileOut.print("\n");
            }
            fileOut.close();
            System.out.println("Your file has been saved as decrypted.txt.");
        } catch (FileNotFoundException e) {
            System.out.println("Sorry, file not found. Please try again.");
        }
    }
}