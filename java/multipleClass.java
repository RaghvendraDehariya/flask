import java.util.Scanner;
class Main
{

	public static void main(String args[])
	{

		Scanner sn=new Scanner(System.in);
		float area,x,y;
		System.out.println("Enter the length:");
		
		x=sn.nextFloat();	
		
		System.out.println("Enter the breadth:");

		y=sn.nextFloat();
		Room room1=new Room();

		room1.getdata(x,y);
		area=room1.length*room1.breadth;
		System.out.println("Area:"+area);

	}
}

class Room
{

	float length;
	float breadth;

	void getdata(float a,float b){

		length=a;
		breadth=b;
		//System.out.println("another class");

	}

}
