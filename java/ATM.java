import java.util.*;

class Main{

	public static void main(String args[]){
		Scanner sn=new Scanner(System.in);
		float withdraw,deposite,balance,amount;
		int ch;
		balance =100000;

		do{
			System.out.println("\n\t\tTRANSECTION\n");
			System.out.println("1. Withdraw\t\t\t2. Deposite\n\n3. Balance\t\t\t4. Exit");

			System.out.println("\nEnter the Transection type :");
			System.out.print("\t\t\t");ch=sn.nextInt();
			switch(ch){

				case 1:
					System.out.println("Enter the amount :");

					System.out.print("\t\t\t");amount=sn.nextFloat();
					balance-=amount;

					System.out.println("Withdraw Successful\n");
					break;
				case 2:	
					System.out.println("Enter the amount :");
					System.out.print("\t\t\t");amount=sn.nextFloat();
					balance+=amount;

					System.out.println("Deposite Successful\n");

					break;
				case 3:
					System.out.println("Your Balance is");
					System.out.println("\t\t\t"+balance);

					break;
				case 4:
					break;

			}
		}while(ch<4);
	}

}
