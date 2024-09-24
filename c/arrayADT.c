#include<stdio.h>
#include<stdlib.h>

struct Array{

	int *A;
	int size;
	int length;

};

void Display(struct Array arr){

	for(int i=0;i<arr.length;i++){

		printf("%d ",arr.A[i]);

	}

}


void insert(struct Array *arr2,int index,int num){

	int i;

	for(i=arr2->length-1;i>=index;i--){

		arr2->A[i+1]=arr2->A[i];

	}

	arr2->A[index]=num;

	arr2->length++;

}

int main(){

	struct Array arr;

	arr.length=0;

	arr.size=10;

	arr.A=(int *)malloc(10*sizeof(int));

	insert(&arr,0,3);

	insert(&arr,1,6);

	insert(&arr,2,9);

	insert(&arr,3,12);

	insert(&arr,4,15);

	Display(arr);


	return 0;
}
