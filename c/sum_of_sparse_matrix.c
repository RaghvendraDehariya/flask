#include<stdio.h>
#include<stdlib.h>

struct ele{

	int i;
	int j;
	int x;

};

struct sparse{

	int m;
	int n;
	int num;
	struct ele *e;

};

void create(struct sparse *s){

	int i,j;

	printf("Enter the dimention: ");

	scanf("%d%d",&s->m,&s->n);

	printf("Enter the size:");

	scanf("%d",&s->num);

	s->e=(struct ele *)malloc(s->num*sizeof(struct ele ));

	for(i=0;i<s->num;i++){

		scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);

	}

}


void display(struct sparse s){


	int i,j,k=0;


	for(i=1;i<=s.m;i++){

		for(j=1;j<=s.n;j++){

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


void add(struct sparse *s1,struct sparse *s2){

	struct sparse *sum;

	int i,j,k;

	i=j=k=0;

	sum=(struct sparse *)malloc(sizeof(struct sparse));

	sum->e=(struct ele *)malloc((s1->num+s2->num)*sizeof(struct ele));

	while(i<s1->num && j<s2->num){

		if(s1->e[i].i<s2->e[j].i)sum->e[k++]=s1->e[i++];
		else if(s1->e[i].i>s2->e[j].i)sum->e[k++]=s2->e[j++];
		else{

			if(s1->e[i].j<s2->e[j].j)sum->e[k++]=s1->e[i++];
			else if(s1->e[i].j>s2->e[j].j)sum->e[k++]=s2->e[j++];
			else{

				sum->e[k]=s1->e[i];
				sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;

			}

		}

	}

	for(;i<s1->num;i++)sum->e[k++]=s1->e[i];

	for(;j<s2->num;j++)sum->e[k++]=s2->e[j];

	sum->m=s1->m;
	sum->n=s1->n;
	sum->num=s1->num+s2->num;

	display(*sum);
}

int main(){

	struct sparse s1,s2;

	create(&s1);

	printf("\n");

	printf("The matrix is: \n");

	display(s1);

	printf("\n");

	create(&s2);

	printf("\n");

	printf("The matrix is: \n");

	display(s2);

	printf("\n");

	printf("The sum of two matrix is: \n");

	add(&s1,&s2);
	
	//display(*s3);

	return 0;
}
