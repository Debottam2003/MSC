package Sem1.final_java_practice.oops.Swing;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class Gui extends JFrame implements ActionListener {
    JButton button;

    public Gui() {
        System.out.println("Hello, World!");
        JFrame frame = new JFrame();
        frame.setTitle("This Is Swing");
        frame.setSize(400, 400);
        frame.getContentPane().setBackground(new Color(2, 2, 2));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        JLabel label = new JLabel("This is Debottam Kar");
        label.setForeground(new Color(255, 255, 255));
        button = new JButton("OK");
        button.setSize(150, 50);
        // button.addActionListener(this);
        frame.setLayout(new BorderLayout());
        frame.add(label, BorderLayout.NORTH);
        frame.add(button, BorderLayout.SOUTH);
        JPanel newPanel = new JPanel();
        newPanel.setBackground(new Color(100, 100, 100));
        JLabel newLabel = new JLabel("This is a new panel");
        newLabel.setForeground(new Color(255, 255, 255));
        newPanel.add(newLabel);
        String[] arr = {"js", "python", "java", "rust", "go"};
        JComboBox cmb = new JComboBox<>(arr);
        newPanel.add(cmb);
        frame.add(newPanel, BorderLayout.CENTER);
        frame.setVisible(true);
        button.addActionListener(e -> {
            String slected = (String) cmb.getSelectedItem();
            System.out.println(slected);
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == button) {
            System.out.println("JS");
        }
    }
}
