import java.util.*;
class Main{

	public static void main(String args[]){
		//Main obj=new Main();
		int A[]={3,7,1,4,2,9,8,5,6,10};

		int a=33,b=99;

		swap(a,b);

		System.out.println(+a);

		System.out.println(+b);
		display(A);

		Quickshort(A,0,10);

		display(A);

	}

	static int partition(int A[],int l,int h){
		
		int pivot=A[h];
		int i=l-1;
		for(int j=l;j<=h;j++){

			if(A[j]<=pivot){

				i++;
				swap(A[i],A[j]);

			}

		}
		i++;
		swap(A[h],A[i]);

		return i;
		
	}

	static void display(int A[]){

		for(int i=0;i<10;i++){

			System.out.print(" "+A[i]);

		}

	}

	static void Quickshort(int A[],int l,int h){

		int i;
		if(l<h){

			i=partition(A,l,h);

			Quickshort(A,l,i-1);

			Quickshort(A,i+1,h);

		}

	}

	static void swap(int a,int b){		
		int temp;
		temp=a;
		a=b;
		b=temp;
	}


}
