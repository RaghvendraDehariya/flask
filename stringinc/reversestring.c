#include<stdio.h>
#include<stdlib.h>

void reverse(char A[],int size){
	
	char B[size],temp;

	int i;

	for(i=0;A[i]!='\0';i++){}

	int j=i-1;

	/*for(i=0,j;i<j;i++,j--){
	
		temp=A[i];

		A[i]=A[j];

		A[j]=temp;

	}*/

	for(i=0,j;j>=0;i++,j--){
	
		B[i]=A[j];

	}
	
	B[j]='\0';

}

int main(){
	
	char A[]={'p','y','t','h','o','n','\0'};
	
	reverse(A,6);

	printf("%s",A);

	return 0;
}
