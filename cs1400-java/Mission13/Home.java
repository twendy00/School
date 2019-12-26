import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Home {
    private JFrame homeScreen;
    private JLabel lblName;
    private JTextField txtName;
    private JButton btnOK;

    private MyButtonListener listen1 = new MyButtonListener();

    // Contructor
    public Home() {
        homeScreen = new JFrame();

        homeScreen.setSize(400, 200);
        homeScreen.setTitle("GUI Fun");
        homeScreen.setDefaultCloseOperation(homeScreen.EXIT_ON_CLOSE);
        homeScreen.setLayout(new FlowLayout());

        lblName = new JLabel("Enter your name:");
        txtName = new JTextField(20);
        btnOK = new JButton("OK");

        btnOK.addActionListener(listen1);
        txtName.addActionListener(listen1);

        homeScreen.add(lblName);
        homeScreen.add(txtName);
        homeScreen.add(btnOK);

        homeScreen.setVisible(true);
    } // end main

    private class MyButtonListener implements ActionListener {

        public void actionPerformed(ActionEvent e) {
            System.out.println("This worked");
            txtName.setBackground(Color.BLUE);
            homeScreen.setVisible(true);
        }
    }
}