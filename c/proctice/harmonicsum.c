#include<stdio.h>

int main(){

	int n;
//	float j=1;
	double sum=0;

	printf("Enter a number: ");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){

		sum+=((double)1/i);

	}

	printf("The sum of harmonic series is: %f",sum);

	return 0;
}
