import java.util.Scanner;

class Main{

	byte global_variable=3;
	static byte static_variable=5;
	final float PI=3.1416f;

	public static void main(String args[]){

		Main obj=new Main();

		byte local_variable=9;

		System.out.println("local_variable: "+local_variable);	
		System.out.println("static_variable: "+static_variable);
		System.out.println("global_variable: "+obj.global_variable);

		double b;
		b=local_variable;
		System.out.println("Type casting in double: "+b);


		float oc=56923e3f;
		//Main obj=new Main();

		System.out.println(+obj.PI);

	}


	
}


