#include<stdio.h>
#include<stdlib.h>

void display(int A[2][2]){
	for(int i=1;i<3;i++){
		for(int j=1;j<3;j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}

void create(int A[2][2]){
	for(int i=1;i<3;i++){
		for(int j=1;j<3;j++){
			scanf("%d",&A[i][j]);
		}
	}
}

int main(){

	int A[2][2],B[2][2];

	printf("Enter the matrix element: \n");
	create(A);
	//display(A);

	printf("Enter the matrix element: \n");
	create(B);
	//display(B);


	return 0;
}
