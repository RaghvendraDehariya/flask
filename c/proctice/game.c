#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){

	printf("Welcome to the Game");

	int num;

	int n;

	srand(time(0));

	n = rand()%1000 + 1;

//	printf("The randam number is : %d",n);

	printf("\n\nFind the number between 1-1000\n\n");

	printf("Now Start \nEnter the number \n");

	for(int i=1;n!=num;i++){

	scanf("%d",&num);

	if(n<num){

		printf("Lower number please!\n");

	}

	else if(n>num){

		printf("Higher number please!\n");

	}

	else{


		printf("YOU WIN\nThe number is found that is : %d",n);

		printf("\nYou found that number in %d attempt's\n\n",i);

	}

	
	}




	return 0;
}
