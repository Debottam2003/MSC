package canteen;


import java.awt.Dimension;
import java.awt.Rectangle;
import java.awt.Toolkit;
import java.util.ArrayList;
import java.util.List;
import javax.swing.JFrame;
import javax.swing.JOptionPane;

/**
 * 
 * @author Sunirmal Khatua
 *
 */
public class MainFrame extends JFrame{

	DisplayCanvas canvas = new DisplayCanvas();	

	public MainFrame() {
		setTitle("CU Canteen");
		setExtendedState(MAXIMIZED_BOTH);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		add(canvas);
		Dimension d = Toolkit.getDefaultToolkit().getScreenSize();
		canvas.chef = new Chef(50, (int)(d.getHeight()/2-35));
		for(int i=0;i<5;i++)
			canvas.students.add(new Student((int)d.getWidth()-100, (int)(d.getHeight()-i*d.getHeight()/6)-200));	
		canvas.chef.students = canvas.students;
	}
	
	
	public static void main(String[] args) {
		MainFrame f = new MainFrame();
		f.setVisible(true);		
		//Code for animation that refreshes the canvas every 200 ms
		while(true) {			
			f.canvas.repaint();
			Chef ch = new Chef(50,50);
			Student s1 = new Student(50,50);
			Student s2 = new Student(50,50);
			Student s3 = new Student(50,50);
			Student s4 = new Student(50,50);
			Student s5 = new Student(50,50);
			ch.start();
			s1.start();
			s2.start();
			s3.start();
			s4.start();
			s5.start();
			try {
				Thread.sleep(200);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}
