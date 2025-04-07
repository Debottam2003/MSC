package Sem1.final_java_practice.oops.Swing;

import java.awt.Color;

import javax.swing.JFrame;

public class Gui extends JFrame{
    public Gui(){
        System.out.println("Hello, World!");
        JFrame frame = new JFrame();
        frame.setTitle("This Is Swing");
        frame.setSize(400, 400);
        frame.getContentPane().setBackground(new Color(2, 2, 2));
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
