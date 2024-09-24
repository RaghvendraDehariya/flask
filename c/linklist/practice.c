#include<stdio.h>
#include<stdlib.h>

struct spar{
	int col;
	int val;
	struct spar *next;
}*A[100];

void creat(){

	int num,i,j;

	struct spar *last,*n;

	for(i=0;i<5;i++){

		A[i]=(struct spar *)malloc(sizeof(struct spar));
		A[i]=NULL;

		printf("Enter the number of element present in row:");
		scanf("%d",&num);

		for(j=0;j<num;j++){
			n=(struct spar *)malloc(sizeof(struct spar));
			printf("Enter the column & value:");
			scanf("%d%d",&n->col,&n->val);
			n->next=NULL;

			if(A[i]==NULL){
				A[i]=last=n;
			}

			else{
				last->next=n;
				last=n;
			}

		}
	}

}


void Display(){
	struct spar *q;	
	for(int i=0;i<5;i++){
		q=A[i];
		for(int j=0;j<5;j++){
			if(j!=q->col){
				printf("0 ");
			}
			else{
				printf("%d ",q->val);
				q=q->next;
			}
		}
		printf("\n");
	}
	printf("\n");
}


void display(struct spar *p){
	//struct spar *q;
	//q=p;
	while(p){
		printf("%d %d",p->col,p->val);
		if(p->next!=NULL){
			printf("-->");
		}
		p=p->next;
	}
	printf("\n");


}


int main(){

	creat();

	/*for(int i=0;i<5;i++){

	  display(A[i]);

	  }*/	

	Display();



	return 0;
}
