import java.awt.BorderLayout;
import java.awt.Container;

import javax.swing.JButton;
import javax.swing.JFrame;

public class practice extends JFrame {
	public practice() {
		setTitle("BorderLayout Practice");
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		Container c=getContentPane();
		c.setLayout(new BorderLayout(5,7));
		JButton a=new JButton("North");
		c.add(a,BorderLayout.NORTH);
		JButton b=new JButton("Center");
		c.add(b,BorderLayout.CENTER);
		JButton f=new JButton("South");
		c.add(f,BorderLayout.SOUTH);
		JButton d=new JButton("West");
		c.add(d,BorderLayout.WEST);
		JButton e=new JButton("East");
		c.add(e,BorderLayout.EAST);
		setSize(500,500);
		setVisible(true);
	}
	public static void main(String[] args) {
		new practice();

	}

}
