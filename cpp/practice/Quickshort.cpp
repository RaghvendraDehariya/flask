#include<iostream>

using namespace std;

void swap(int *a,int *b){

	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int A[],int l,int h){

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

void Quick(int A[],int l,int h){

	int j;

	if(l<h){

		j=partition(A,l,h);

		Quick(A,l,j);
		Quick(A,j+1,h);


	}

}

void display(int A[]){

	for(int i=0;i<10;i++){

		cout<<" "<<A[i];

	}

	cout<<endl;

}

int main(){

	int A[]={4,6,38,94,3,95,33,66,99,32,INT32_MAX};

	display(A);

	Quick(A,0,10);

	cout<<"\n the shorted array is :"<<endl;

	display(A);


	return 0;
}
