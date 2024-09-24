import java.util.*;
class Main{

	public static void main(String args[]){
		Main obj=new Main();
		Scanner sn=new Scanner(System.in);
		int m;
		float kl;

		System.out.println("Enter a number in mile : ");

		m=sn.nextInt();
		kl=m*1.60934F;

		System.out.print("The value of mile in kilometer is: "+kl);

	}
}
