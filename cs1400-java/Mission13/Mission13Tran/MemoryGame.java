import javax.swing.*;
import java.util.*;
import java.awt.*;
import java.awt.event.*;

public class MemoryGame {

    private JFrame frame;
    private JLabel welcome;
    private JLabel intro;
    private JButton btnOK;
    private JTextField colorInput;
    private JLabel inputLabel;
    private JLabel labelResults;
    private JLabel colorMemorize;
    private String[] colorsList = new String[5];
    private String userInput = "";
    private int count = 0;
    private JLabel winRemark;

    public MemoryGame() {

        createColorList();
        displayColors();
    }

    private void createColorList() {
        // randomly generate colors & save to array
        String[] colorsArray = { "red", "orange", "yellow", "green", "blue", "violet", "pink", "brown", "grey", "black",
                "white" };

        Random rand = new Random();

        for (int i = 0; i < 5; i++) {
            String color = (colorsArray[rand.nextInt(11)]);
            colorsList[i] = color;
            // System.out.println(colorsList[i]); // Use to test game
        }
    }

    // intro to game and shows colors
    private void displayColors() {
        // set up frame
        frame = new JFrame();
        frame.setSize(250, 200);
        frame.setTitle("Memory Game");
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        // build contents
        welcome = new JLabel("Welcome to the Memory Color Game!");
        intro = new JLabel("Try to memorize this color sequence:");
        colorMemorize = new JLabel(colorsList[0] + ", " + colorsList[1] + ", " + colorsList[2] + ", " + colorsList[3]
                + ", " + colorsList[4]);
        btnOK = new JButton("OK");

        // add contents
        frame.add(welcome);
        frame.add(intro);
        frame.add(colorMemorize);
        frame.add(btnOK);

        // add action listener
        btnOK.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // close first frame
                frame.dispose();
                askColor();
            }
        });
        frame.setVisible(true);
    }

    // ask user for their color input
    private void askColor() {
        // set up frame
        frame = new JFrame();
        frame.setSize(250, 200);
        frame.setTitle("Memory Game");
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        // build contents
        colorInput = new JTextField(15);
        inputLabel = new JLabel("Enter color # " + (count + 1) + ":");
        labelResults = new JLabel("");

        // add contents
        frame.add(inputLabel);
        frame.add(colorInput);
        frame.add(labelResults);

        // add action listener
        colorInput.addActionListener(new ActionListener() {
            // evalutes user input to color array
            // recalls askColor method if color stated correctly.
            // game ends if user is incorrect or guesses all colors correctly
            public void actionPerformed(ActionEvent e) {
                userInput = colorInput.getText();
                if (count < colorsList.length - 1) {
                    if (userInput.equals(colorsList[count])) {
                        frame.dispose();
                        count++;
                        askColor();
                    } else {
                        labelResults.setText("You lose!");
                    }
                } else {
                    frame.dispose();
                    gameWon();
                }
            }
        });

        frame.setVisible(true);
    }

    // ending statement for winners
    private void gameWon() {
        // set up frame
        frame = new JFrame();
        frame.setSize(250, 200);
        frame.setTitle("Memory Game");
        frame.setDefaultCloseOperation(frame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());

        // build content
        winRemark = new JLabel("Congratulations -- you win!");

        // add content
        frame.add(winRemark);

        frame.setVisible(true);
    }
}