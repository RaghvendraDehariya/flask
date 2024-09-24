#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;

	struct node * next;

}*start=NULL;

void creat(int a[],int num)
{
	struct node *temp,*n;

	int i=1;

	start=(struct node *)malloc(sizeof(struct node));

	start->data=a[0];

	start->next=NULL;

	temp=start;

	while(i<num)
	{

		n=(struct node *)malloc(sizeof(struct node));

		n->data=a[i];

		n->next=NULL;

		temp->next=n;

		temp=n;

		i++;
	}

}


void insertinfirst(void)
{

	struct node * m;

	int no;

	scanf("%d",&no);

	m=(struct node *)malloc(sizeof(struct node));	

	m->data=no;

	m->next=start;

	start=m;

}

void insertinmid(void)
{

	struct node * m,*p;

	int no,n;

	printf("Enter the number: ");

	scanf("%d",&no);

	p=start;

	printf("Enter the index: ");

	scanf("%d",&n);

	p+=n;

	m=(struct node *)malloc(sizeof(struct node));	

	m->data=no;

	m->next=p->next;

	p->next=m;

}

void insertinlast()
{

	struct node * m,*temp;

	int no;

	scanf("%d",&no);

	m=(struct node *)malloc(sizeof(struct node));	

	m->data=no;

	m->next=NULL;

	temp=start;

	if(start==NULL)
	{

		printf("This is empty array\n");

	}
	else if(start->next==NULL)
	{

		printf("There is only one element in the array\n");

	}

	else{
		while(temp->next!=NULL)
		{

			temp=temp->next;

		}

		temp->next=m;
	}

}

void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d--> ",ptr->data);

		ptr=ptr->next;

	}

	printf("\n");

}

int main(){

	int a[50]={6,57,95,46,07,46,798,24,369};

	/*int i;

	printf("Enter the element in the array: ");

	scanf("%d",&i);*/

	creat(a,9);

	display(start);

	//insertinfirst();

	//display(start);

	//insertinmid();

	insertinlast();

	display(start);


	return 0;
}
