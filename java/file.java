import java.awt.*;
import javax.swing.*;
class notepad extends JFrame{

	JFrame f;
	JMenuBar mb;
	JMenuItem i1;
	JMenu m1,m2,m3;
	notepad(){

		f=new JFrame();
		f.setLayout(null);
		mb=new JMenuBar();
		m1=new JMenu("File");
		m2=new JMenu("Edit");
		m3=new JMenu("View");
		i1=new JMenuItem("save");
		m1.add(i1);
		//m2.add(i1);
		//m3.add(i1);
		mb.add(m1);
		//mb.add(m2);
		//mb.add(m3);
		f.setJMenuBar(mb);
		f.setVisible(true);
		f.setSize(300,200);
	}

	public static void main(String args[]){

		new notepad();

	}
}
