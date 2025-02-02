package canteen;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

import javax.swing.ImageIcon;

/**
 * 
 * @author Sunirmal Khatua
 *
 */
public class Student extends Thread implements DisplayObject {

	private Image img;
	private int x,y;
	FoodBuffer foods = null;
	Chef chef;
	public Student(int x, int y) {
		this.x=x;
		this.y=y;
		foods = new FoodBuffer(10);;
		img = new ImageIcon(getClass().getResource("/images/student.png")).getImage();
	}
	
	@Override
	public void run(){
		
	}

	@Override
	public void draw(Graphics g) {
		//Draw FoodBuffer
		int startX = x - 500;
		int startY = y;	
		for(int i=0;i<10;i++) {
			g.drawRect(startX, startY, 50, 50);
			startX += 50;
		}
		//Draw Consumer
		g.drawImage(img,x,y,70,70,null);
	}

}
