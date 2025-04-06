package canteen;

import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Image;
import java.awt.Toolkit;
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
public class Chef extends Thread implements DisplayObject {

	private Image img;
	private int x,y;
	
	ArrayList<Student> students = new ArrayList<>();
	
	public Chef(int x, int y) {
		this.x=x;
		this.y=y;
		img = new ImageIcon(getClass().getResource("/images/chef.png")).getImage();
	}
	
	@Override
	public void run(){
        FoodBuffer fb = new FoodBuffer(1);
		FoodType ft = FoodType.BANANA;
		Food f = new Food(ft);
		fb.produce(f, 0);
		//fb.draw(null);
	}

	@Override
	public void draw(Graphics g) {
		g.drawImage(img,x,y,70,70,null);
	}

}
