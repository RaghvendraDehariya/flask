import java.util.*;
class Main{

	public static void main(String args[]){
	Main obj=new Main();
	Scanner sn=new Scanner(System.in);
	float n,per,sum=0;

	System.out.println("Enter student number: ");

	for(int i=0;i<5;i++){

		n=sn.nextFloat();
		sum=sum+n;

	}

	per=sum/5;

	System.out.print("The persentage of a student is: "+per);


	}
}
