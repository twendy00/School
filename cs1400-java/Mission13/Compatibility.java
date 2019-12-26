import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

public class Compatibility {
    private JFrame mainWindow;
    private JLabel lblName1;
    private JLabel lblName2;
    private JTextField txtName1;
    private JTextField txtName2;
    private JButton btnCheck;
    private JLabel lblResults;

    public Compatibility() {

        createContents();
        mainWindow.setVisible(true);
    }

    private void createContents() {

        // set up frame
        mainWindow = new JFrame();

        mainWindow.setSize(600, 200);
        mainWindow.setTitle("Check your compatibility!");
        mainWindow.setDefaultCloseOperation(mainWindow.EXIT_ON_CLOSE);
        mainWindow.setLayout(new FlowLayout());

        // build contents
        lblName1 = new JLabel("Enter Name #1:");
        lblName2 = new JLabel("Enter Name #2:");
        txtName1 = new JTextField(15);
        txtName2 = new JTextField(15);
        btnCheck = new JButton("Check Compatibility");
        lblResults = new JLabel("");

        // add conents
        mainWindow.add(lblName1);
        mainWindow.add(txtName1);
        mainWindow.add(lblName2);
        mainWindow.add(txtName2);
        mainWindow.add(btnCheck);
        mainWindow.add(lblResults);

        // Add action listener
        btnCheck.addActionListener(new CheckListener());
    } // end of create contents

    private class CheckListener implements ActionListener {
        public void actionPerformed(ActionEvent e) {

            Random rand = new Random();
            int fate = 0;

            if (txtName1.getText().equals("")) {
                lblResults.setText("Missing Name #1");
            } else if (txtName2.getText().equals("")) {
                lblResults.setText("Missing Name #2");
            } else {

                // Determine Fate
                fate = rand.nextInt(2);

                if (fate == 0) {
                    lblResults.setText("Love is in the air!");
                }
                if (fate == 1) {
                    lblResults.setText("That's not love in the air!");
                }
            }
        }

    }
}