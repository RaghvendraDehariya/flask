#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;

	struct node *next;

}*first=NULL,*second=NULL,*third=NULL;

void create(int A[],int size){

	struct node *temp,*n;
	int i;

	first=(struct node *)malloc(sizeof(struct node));

	first->data=A[0];
	first->next=NULL;
	temp=first;

	for(i=1;i<size;i++){

		n=(struct node *)malloc(sizeof(struct node));
		n->data=A[i];
		n->next=NULL;

		temp->next=n;
		temp=n;

	}

}

void create2(int A[],int size){

	struct node *temp,*n;
	int i;

	second=(struct node *)malloc(sizeof(struct node));

	second->data=A[0];
	second->next=NULL;
	temp=second;

	for(i=1;i<size;i++){

		n=(struct node *)malloc(sizeof(struct node));
		n->data=A[i];
		n->next=NULL;

		temp->next=n;
		temp=n;

	}

}

int count(struct node *p){

	int c=0;
	while(p){

		p=p->next;
		c++;

	}

	return c;
}

void display(struct node *p){

	while(p!=NULL){

		printf("%d",p->data);

		p=p->next;

		if(p!=NULL){

			printf("-->");

		}

		else{

			printf(" ");

		}
	}
	printf("\n");
}

void Rdisplay(struct node *p){

	if(p!=NULL){

		printf("%d",p->data);


		if(p->next!=NULL){

			printf("-->");

		}

		else{

			printf(" ");

		}

		Rdisplay(p->next);
	}

}






void insert(struct node *temp,int pos,int num);

int delete(struct node *p,int pos);

int isshorted(struct node *p);

void reverce1(struct node *p);

void reverce2(struct node *p);

void reverce3(struct node *q,struct node *p);

void concatination(struct node *p,struct node *q);

void merge(struct node *p,struct node *q);

int isloop(struct node *p);




int main(){


	int A[]={1,34,75,430,454};
	int B[]={3,59,69,480,654};

	struct node *t1,*t2;

	//int pos;

	//	insert(second,0,2);

	create(A,5);

	t1=first->next->next;

	t2=first->next->next->next->next;


//	t2->next=t1;

	printf("The value is: %d",isloop(first));

	//	create2(B,5);

	//display(first);


	//	merge(first,second);

	//display(third);

	//concatination(first,second);

	//printf("The concatinated linklist is this:\n");

	//display(third);

	//printf("Enter a number: ");

	//scanf("%d",&pos);

	//delete(first,pos);

	//reverce3(NULL,first);

	//display(first);

	/*

	   if(isshorted(first)){
	   printf("Shorted");
	   }
	   else{
	   printf("Not Shorted");
	   }*/

	return 0;
}





int isloop(struct node *p){

	struct node *q;	
		q=p;

	do{
		p=p->next;
		q=q->next;
		q=q?q->next:NULL;
	}while(p && q && p!=q);

/*	if(p==q)
		return 1;
	else 
		return 0;
*/
	return p==q?1:0;
}


void merge(struct node *p,struct node *q){

	struct node *last;


	if(first->data<second->data){
		third=last=first;
		first=first->next;
		last->next=NULL;
	}
	else {
		third=last=second;
		second=second->next;
		last->next=NULL;
	}

	while(first!=NULL && second!=NULL){

		if(first->data<second->data){
			last->next=first;
			last=first;
			first=first->next;
			last->next=NULL;
		}

		else{
			last->next=second;
			last=second;
			second=second->next;
			last->next=NULL;
		}

	}

	if(first!=NULL){
		last->next=first;
	}
	else{
		last->next=second;
	}

}





void concatination(struct node *p,struct node *q){

	third=first;

	while(p->next!=NULL){

		p=p->next;

	}

	p->next=q;


}



void reverce3(struct node *q,struct node *p){

	if(p!=NULL){

		reverce3(p,p->next);

		p->next=q;

	}

	else{

		first=q;

	}

}

void reverce2(struct node *p){

	struct node *q,*r;
	q=r=NULL;

	while(p!=NULL){

		r=q;
		q=p;
		p=p->next;
		q->next=r;

	}

	first=q;


}

void reverce1(struct node *p){

	int *A,i=0;

	A=(int *)malloc(sizeof(int)*count(p));

	while(p!=NULL){

		A[i]=p->data;
		p=p->next;
		i++;

	}

	p=first;
	i--;

	while(p!=NULL){

		p->data=A[i--];
		p=p->next;

	}

}


void insert(struct node *temp,int pos,int num){

	struct node *n;

	int i;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=num;


	if(pos<0 || pos>count(temp))
	{	

		return;

	}
	else if(pos==0){

		n->next=first;
		first=n;

	}

	else if(pos>0 && temp){

		for(i=0;i<pos-1;i++){

			temp=temp->next;

		}

		n->next=temp->next;
		temp->next=n;

	}

}


int delete(struct node *p,int pos){

	int i,x=-1;
	struct node *q=NULL;
	if(pos<=0 || pos>count(p)){
		return x;
	}
	else if(pos==1){
		p=first;
		x=p->data;
		first=first->next;
		free(p);
		return x;
	}

	else{
		for(i=0;i<pos-1;i++){
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->data;
		free(p);
		return x;
	}

}

int isshorted(struct node * p){
	int x;
	x=-327580099;
	while(p){
		if(p->data<x)
			return 0;
		x=p->data;
		p=p->next;
	}
	return 1;
}


