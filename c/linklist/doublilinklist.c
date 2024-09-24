#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
}*first=NULL;

void create(int A[],int size){

	struct node *last,*n;
	first=(struct node *)malloc(sizeof(struct node));
	first->prev=NULL;
	first->data=A[0];
	first->next=NULL;
	
	last=first;

	for(int i=1;i<size;i++){
		n=(struct node *)malloc(sizeof(struct node));
		n->prev=NULL;
		n->data=A[i];
		n->next=NULL;

		last->next=n;
		n->prev=last;
		last=n;
	}


}

void display(struct node *p){
	while(p!=NULL){
		printf("%d",p->data);
		if(p->next!=NULL){printf("-->");}
		p=p->next;
	}
	printf("\n");
}

int length(struct node *p){
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}

void insert(struct node *p,int index,int num){
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->prev=NULL;
	n->data=num;
	n->next=NULL;
	
	if(index<0 || index>length(first)){
		return ;
	}

	if(index==0){
		if(first==NULL){
			first=n;
		}
		else{
		n->next=first;
		first->prev=n;
		first=n;
		}
	}

	else{
		for(int i=1;i<index;i++){
			p=p->next;
		}
		n->next=p->next;
		n->prev=p;
		p->next=n;
		if(p->next!=NULL){
			p->next->prev=n;
		}
	}
}


int Delete(struct node *p,int index){
	int n=-1;
	if(index<=0 || index>length(first)){
		return n;
	}

	if(index==1){
		n=first->data;
		first=first->next;
		if(p->next)first->prev=NULL;
		free(p);
	}
	else{
		for(int i=1;i<index;i++){
			p=p->next;
		}
		n=p->data;
		p->prev->next=p->next;
		if(p->next)p->next->prev=p->prev;
		free(p);
	}
	return n;
}

void reverse(struct node *p){
	struct node *temp;
	while(p!=NULL){
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL)first=p;
	}

}

int main(){
	
	int A[]={1,2,3,4,5,6},pos;

	create(A,6);

	reverse(first);

//	printf("Enter the position:");

//	scanf("%d",&pos);

//	printf("%d\n",Delete(first,pos));
//	insert(first,1,6);
//	insert(first,2,3);

	display(first);

	return 0;
}
