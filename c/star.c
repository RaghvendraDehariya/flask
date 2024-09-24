#include<stdio.h>

int main(){

	int n,m;

	printf("Enter a number: ");

	scanf("%d",&n);

	m=n;
	for(int i=1;i<=n;i++){
		int a=1;
		while(a<m){
			printf(" ");
			a++;
		}
		int b=0;
		while(b<(2*i-1)){
			printf("*");
			b++;
		}
		m--;
		printf("\n");
	}



	return 0;
}
