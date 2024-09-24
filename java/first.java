import java.util.Scanner;

class Main{
	//static double pi=3.1416;
	double cir(int r){

		double ci;

		ci=2*3.1416*r;

		//System.out.println(ci);
		return ci;
	}

	public static void main(String args[]){

		Scanner sn=new Scanner(System.in);
		int a,b,i=0;

		//Main obj=new Main();

		//System.out.print("Enter two a number:");
		System.out.print("Enter a number:");
		a=sn.nextInt();

		for(i=0;i<a;i++){
		System.out.println(" "+i);

		}

		//b=sn.nextInt();
		//while(i<a){++i;
		//System.out.println(i);
		//}
		//System.out.println(obj.cir(a));
		
		

	/*	System.out.println("a+b="+(a+b));
		System.out.println("a-b"+(a-b));
		System.out.println("a*b="+(a*b));
		System.out.println("a/b="+(a/b));
*/
	
	}
	

	
}


