import java.util.*;

class Main{

	public static void main(String args[]){
		Scanner sn=new Scanner(System.in);
		float f,cel=0;
		System.out.print("Enter a number in fahrenheit: ");
		f=sn.nextFloat();

		cel=(f-32)/1.8f;

		System.out.println("The conversion of fahrenheit to celsius is : "+cel);

	}

}
