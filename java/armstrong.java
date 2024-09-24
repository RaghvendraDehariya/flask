import java.util.*;

class Main{

	public static void main(String args[]){

		Scanner sn=new Scanner(System.in);
		Main obj=new Main();
		int a;

		System.out.print("Enter a number: ");
		a=sn.nextInt();

		obj.armstrong(a);

		//System.out.println(+a);

	}

	void armstrong(int num){

		int temp,arm=0,rem;
		temp=num;
		while(temp!=0){

			rem=temp%10;
			arm=arm+rem*rem*rem;
			temp=temp/10;

		}

		if(num==arm)
			System.out.println("The number is armstrong.");

		else
			System.out.println("The number isn't armstrong.");
	}

}
