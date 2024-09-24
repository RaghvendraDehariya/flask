import java.util.*;
class Main{

	public static void main(String args[]){
		Main obj=new Main();
		Scanner sn=new Scanner(System.in);
		double Area;
		final float pi=3.1416f;
		int r,h;

		System.out.println("Enter the radius & height: ");

		r=sn.nextInt();
		h=sn.nextInt();
		Area=((double)(pi*Math.pow(r,2))+(2*pi*r*h));

		System.out.print("The Area is: "+Area);

	}
}
