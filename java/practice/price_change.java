import java.util.*;
class Main{

	public static void main(String args[]){
		Main obj=new Main();
		Scanner sn=new Scanner(System.in);
		float paise;
		float price;

		System.out.println("Enter the price in decimal : ");

		price=sn.nextFloat();
		paise=price*100;

		System.out.print("The value of rupees in paise is: "+(int)paise);

	}
}
