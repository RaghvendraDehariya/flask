#include<stdio.h>
#include<stdlib.h>

struct term{

	int coff;

	int exp;

};

struct poly{

	int n;

	struct term *t;

};

void creat(struct poly *p){

	printf("Enter the terms:");

	scanf("%d",&p->n);

	p->t=(struct term *)malloc(p->n*sizeof(struct term));

	for(int i=0;i<p->n;i++){

	
		scanf("%d%d",&p->t[i].coff,&p->t[i].exp);

	}


}

void display(struct poly p){

	for(int i=0;i<p.n;i++){


		printf("%dx%d",p.t[i].coff,p.t[i].exp);

		if(i<p.n-1){
			
			printf("+");

		}
		
		else{
		
			printf("=0");

		}

	}

	printf("\n");


}


struct poly *add(struct poly p1,struct poly p2){

	struct poly *p3;

	int i,j,k;

	i=j=k=0;

	p3=(struct poly *)malloc(sizeof(struct poly));

	p3->t=(struct term *)malloc(sizeof(struct term));

	while(i<p1.n && j<p2.n){

		if(p1.t[i].exp>p2.t[j].exp)
			p3->t[k++]=p1.t[i++];

		else if(p1.t[i].exp<p2.t[j].exp)
			p3->t[k++]=p2.t[j++];

		else{

			p3->t[k].exp=p1.t[i].exp;

			p3->t[k++].coff=p1.t[i++].coff+p2.t[j++].coff;

		}
	}

	for(;i<p1.n;i++)p3->t[k++]=p1.t[i];
	for(;j<p2.n;j++)p3->t[k++]=p2.t[j];

	p3->n=k;

	return p3;
}

int main(){

	struct poly p1,p2,*p3;

	creat(&p1);

	display(p1);

	printf("\n");

	creat(&p2);

	display(p2);

	printf("\n");

	p3=add(p1,p2);

	display(*p3);

	return 0;
}
