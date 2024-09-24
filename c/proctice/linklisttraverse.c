#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;

	struct node * next;

};

void traverse(struct node *ptr){

	int i=0;

	while(ptr != NULL){

		printf("Element %d: %d\n",i+1,ptr->data);

		i++;

		ptr=ptr->next;

	}
}






int main(){


	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	struct node *new;

	head=(struct node *) malloc(sizeof(struct node));
	second=(struct node *) malloc(sizeof(struct node));
	third=(struct node *) malloc(sizeof(struct node));
	fourth=(struct node *) malloc(sizeof(struct node));
	new=(struct node *) malloc(sizeof(struct node));

	head->data=3;
	head->next=second;

	second->data=87;
	second->next=third;

	third->data=43;
	third->next=fourth;

	fourth->data=99;
	fourth->next=NULL;

	//insert in the first

	/*
	new->data=78;
	new->next=second;
	head->next=new;

	*/

	//insert in the end

	/*new->data=37;
	new->next=NULL;

	struct node *temp;

	temp=head;

	while(temp->next!=NULL){

		temp=temp->next;

	}

	temp->next=new;
	*/
	
	//insert a node after the given node
	
	new->data=56;
	new->next=third->next;
	third->next=new;




	traverse(head);

	return 0;
}
