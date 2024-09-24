#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){

	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}

int Partision(int A[],int l,int h){
	
	int pivot=A[l];
	int i=l,j=h;

	do{

		do{i++;}while(A[i]<=pivot);

		do{j--;}while(A[j]>pivot);

		if(i<j){

			swap(&A[i],&A[j]);

		}

	}while(i<j);

		swap(&A[j],&A[l]);

		return j;

}

void Quick_Short(int A[],int l,int h){
	int j;
	if(l<h){
	
		j=Partision(A,l,h);
		Quick_Short(A,l,j);
		Quick_Short(A,j+1,h);

	}


}

void display(int A[]){

	for(int i=0;i<10;i++){

		printf("%d ",A[i]);

	}

}

int main(){
	
	int A[]={2,3,5,45,22,54,29,9,423,6,INT32_MAX};
	
	display(A);

	Quick_Short(A,0,10);

	printf("\n\nThis is Shorted array:\n");

	display(A);


	return 0;
}
