#include<stdio.h>
#include<stdlib.h>

struct array{
	int *A;
	int size;
	int length;
};

void display(struct array arr){

	for(int i=0;i<arr.length;i++){

		printf("%d ",arr.A[i]);

	}

	printf("\n%d",arr.length);

}

int main(){

	struct array arr;

	int n,i;

	arr.length=0;

	printf("Enter the array size:");

	scanf("%d",&arr.size);

	arr.A=(int *)malloc(arr.size*sizeof(int));

	printf("Enter the number of length:");

	scanf("%d",&n);

	for(i=0;i<n;i++){

		scanf("%d",&arr.A[i]);

		arr.length=n;

	}

	display(arr);


	free(arr.A);


	return 0;
}
