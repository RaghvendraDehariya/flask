#include<stdio.h>
#include<stdlib.h>

struct element{

	int i;
	int j;
	int x;

};


struct sparsh{

	int n;
	int m;
	int num;
	struct element *e;

};

void creat(struct sparsh *s){

	int i;

	printf("Enter the dimensions:");

	scanf("%d%d",&s->n,&s->m);


	printf("Enter the non-zero element:");

	scanf("%d",&s->num);

	s->e=(struct element *)malloc(s->num*sizeof(struct element));

	printf("Enter the element: \n");

	for(i=0;i<s->num;i++){

		scanf("%d",&s->e[i].i);

		scanf("%d",&s->e[i].j);

		scanf("%d",&s->e[i].x);


	}


}

void display(struct sparsh s){

	int i,j,k=0;

	for(i=1;i<=s.n;i++){

		for(j=1;j<=s.m;j++){

			if(i==s.e[k].i && j==s.e[k].j){

				printf("%d ",s.e[k++].x);

			}

			else{

				printf("0 ");

			}

		}

		printf("\n");


	}


}

int main(){

	struct sparsh s;

	creat(&s);

	printf("\nThe sparse matrix is: \n");


	display(s);






	return 0;
}

