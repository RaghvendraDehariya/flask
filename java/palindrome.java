import java.util.*;

class Main{

	public static void main(String args[]){

		Scanner sn=new Scanner(System.in);
		Main obj=new Main();
		int a;

		System.out.print("Enter a number: ");
		a=sn.nextInt();

		obj.palindrome(a);

		//System.out.println(+a);

	}

	void palindrome(int num){

		int temp,pali=0,rem;
		temp=num;
		while(temp!=0){

			rem=temp%10;
			pali=pali*10+rem;
			temp=temp/10;

		}

		if(num==pali)
			System.out.println("The number is palindrome.");

		else
			System.out.println("The number isn't palindrome.");
	}

}
