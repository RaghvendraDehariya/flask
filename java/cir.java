import java.util.Scanner;

class Main{

	public static void main(String[] args){

		Scanner st=new Scanner(System.in);
		int a;
		float b;

		Main obj=new Main();

		System.out.println("Enter a int & float number:");
		a=st.nextInt();
		b=st.nextFloat();

		System.out.println("Enter a integer number:"+a);
		System.out.println("Enter a floating number:"+b);

		System.out.println("The circuference of a circle is: "+obj.cir(a));
	}

	double cir(int r){

		double ci;

		ci=2*3.1416*r;

		return ci;

	}

}




