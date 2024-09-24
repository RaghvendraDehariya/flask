#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;

void create(int A[],int size){
	struct node *last,*n;
	head=(struct node *)malloc(sizeof(struct node));
	head->data=A[0];
	head->next=head;
	last=head;

	for(int i=1;i<size;i++){
		n=(struct node *)malloc(sizeof(struct node));
		n->data=A[i];
		n->next=last->next;
		last->next=n;
		last=n;
	}


}

int length(struct node *p){
	int c=0;
	do{
		c++;
		p=p->next;
	}while(p!=head);
	return c;
}

void display(struct node *h){

	do{
		if(h!=head){
			printf("-->");
		}

		printf("%d",h->data);
		h=h->next;
	}while(h!=head);
	printf("\n");

}

void rdisplay(struct node *h){
	static int flag=0;
	if(h!=head || flag==0){
		flag=1;
		if(h!=head){
			printf("-->");
		}
		printf("%d",h->data);
		rdisplay(h->next);
	}
	flag=0;
}

void insert(struct node *p,int index,int num){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=num;

	/*if(index<0 || index>length(head)){
	  return ;
	  }*/

	if(index==0){
		if(head==NULL){
			head=n;
			head->next=head;
		}
		else{	
			while(p->next!=head)p=p->next;
			p->next=n;
			n->next=head;
			head=n;
		}
	}


	else{
		for(int i=0;i<index-1;i++)p=p->next;
		n->next=p->next;
		p->next=n;
	}
}

int Delete(struct node *p,int index){
	struct node *q;
	int i,x=-1;
	if(index<0 || index>length(head)){
		return x;
	}

	if(index==1){
		x=head->data;
		while(p->next!=head)p=p->next;
		if(head==p){
			free(head);
			head=NULL;
		}
		else{
			p->next=head->next;
			free(head);
			head=p->next;
		}
	}

	else{
		for(i=0;i<index-2;i++){
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		x=q->data;
		free(q);
	}
	return x;
}

int main(){

	int A[]={8},pos;

	create(A,1);

	//printf("%d\n",length(head));

	display(head);

	//	printf("Enter the position: ");

	//	scanf("%d",&pos);

	printf("%d",Delete(head,1));

	//display(head);

	return 0;
}
