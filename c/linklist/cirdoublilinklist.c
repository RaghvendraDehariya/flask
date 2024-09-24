#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int data;
	struct node *next;
}*head=NULL;

void create(int A[],int size){
	struct node *n,*last;
	head=(struct node *)malloc(sizeof(struct node));
	head->prev=head;
	head->data=A[0];
	head->next=head;
	last=head;

	for(int i=1;i<size;i++){
		n=(struct node *)malloc(sizeof(struct node));
		n->data=A[i];

		last->next=n;
		n->prev=last;
		n->next=head;
		head->prev=n;
		last=n;
	}
}

void display(struct node *p){
	do{
		printf("%d",p->data);
		if(p->next!=head)printf("-->");
		p=p->next;
	}while(p!=head);
}

int length(struct node *p){
	int count=0;
	do{
		count++;
		p=p->next;
	}while(p!=head);
	return count;
}

void insert(struct node *p,int index,int num){
	int i;
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=num;
	n->next=n;
	n->prev=n;
	/*	if(index<0 || index>length(head)){
		return ;
		}*/
	if(index==0){
		if(head==NULL){
			head=n;
		}
		else{
			n->prev=p->prev;
			n->next=p;
			p->prev->next=n;
			p->prev=n;
			head=n;
		}	
	}

	else{
		for(i=1;i<index;i++)p=p->next;
		n->next=p->next;
		p->next=n;
		n->prev=p;
		if(p->next==head)p->next->prev=n;
	}
}

int Delete(struct node *p,int index){
	int i,x=-1;
	if(index<=0 || index>length(head)){
		return x;
	}
	if(index==1){
		if(head->next==head){
			x=head->data;
			free(head);
			head=NULL;
		}
		else{
			x=head->data;
			head->next->prev=head->prev;
			head->prev->next=head->next;
			head=head->next;
			free(p);
		}
	}

	else{
		for(i=1;i<index;i++)p=p->next;
		x=p->data;
		p->next->prev=p->prev;
		p->prev->next=p->next;
		free(p);
	}

	return x;
}

int main(){

	int A[]={6,5,4,3,2,1},pos;

	create(A,6);
	
	display(head);

	printf("\nEnter a position : ");

	scanf("%d",&pos);

	//insert(head,pos,9);

	printf("%d\n",Delete(head,pos));

	//	printf("%d\n",length(head));


	return 0;
}
