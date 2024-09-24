import java.util.*;

class Main{

	public static void main(String args[]){

		Scanner sn=new Scanner(System.in);

		Main obj=new Main();

		int a;

		System.out.print("Enter a number : ");
		a=sn.nextInt();

		obj.even_odd(a);


	}

	void even_odd(int n){

		if(n%2==0){

			System.out.println("The number is even.");

		}

		else{

			System.out.println("The number is odd.");

		}
	}

}
