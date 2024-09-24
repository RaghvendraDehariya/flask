import java.util.*;

class Main{

	public static void main(String args[]){
		Scanner sn=new Scanner(System.in);
		int n;
		double sum=0;
		System.out.print("Enter a number: ");
		n=sn.nextInt();
		for(int i=1;i<=n;i++){

			sum+=(1f/i);

		System.out.print("i = "+i);
		System.out.println("\tSum = "+sum);

		}


	}

}
