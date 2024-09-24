#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;

	struct node *next;

}*first;

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

int main(){


	int A[]={3,4,5,6,7,8,9};

	int p,n,p2,n2;

	create(A,7);

	Rdisplay(first);

	printf("\n %d\n ",count(first));

	printf("Enter the position and number :");

	scanf("%d%d",&p,&n);

	insert(first,p,n);

	display(first);

	printf("\nEnter the position and number :");

	scanf("%d%d",&p2,&n2);

	insert(first,p2,n2);

	display(first);


	return 0;
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

		n->next=temp;
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





