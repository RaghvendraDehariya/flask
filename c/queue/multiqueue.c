#include<stdio.h>
#include<stdlib.h>

typedef struct node{ 
	char data; struct node *next; 
}node;


typedef struct{ 
	node *front; node * rear; 
}queue; 


void creat(queue *q){ 
	q->front=q->rear=NULL; 
}

void enqueue(queue *q,char x){ 
	node *t; 
	t=(node*)malloc(sizeof(node)); 
	if(t==NULL) printf("the queue is full"); 
	else{ t->data=x; t->next=NULL; 
		if(q->front==NULL){ 
			q->front=q->rear=t; 
		} 
		else{ 
			q->rear->next=t; 
			q->rear=t; 
		} 
	}
} 


char dequeue(queue *q){ 
	char x='?'; 
	node *p; 
	if(q->front==NULL) 
		printf("the queue is empty"); 
	else{ 
		p=q->front; 
		q->front=q->front->next;
		x=p->data; free(p);
	} 
	return x; 
}


void display(queue q){ 
	node *i=q.front; 
	while(i!=NULL){ 
		printf("%c ",i->data); 
		i=i->next; 
	} 
	printf("\n");
} 


void ex(queue *q,char *a){ 
	int i; 
	for(i=0;a[i]!='\0';i++){ 
		enqueue(q,a[i]);
	}
}


void priority(queue *q,char *a,int b[])
{ 
	int i=0; 
	for(int j=0;j<3;j++){ 
		creat(&q[j]); 
	} 
	while(a[i]!='\0'){ 
		if(b[i]==1){ 
			enqueue(&q[0],a[i]);
		}	
		else if(b[i]==2){ 
			enqueue(&q[1],a[i]);
		}	

		else{
			enqueue(&q[2],a[i]); 
		} 
		i++; 
	}
	/*	for(int j=1;j<=3;j++){ 
		printf("q%i: ",j); 
		display(q[j-1]);
		}
		*/
}

int isinteger(int a){
	if( a==1 ||  a==2|| a==3|| a==4|| a==5)
		return 1;
	return 0;
}

void set(){ 
	queue q[3];	
	int i=0;
	int ch,k,key;
	int b,m,*x;
	char a,*y;
	creat(&q[0]);
	creat(&q[1]);
	creat(&q[2]);
	do{ 
		printf("\n\nChoose the option in Queue.\n");
		printf("\n1. enqueue \t\t\t\t 2. dequeue \n3. display \t\t\t\t 4. set priority\n\t\t 5.exit\n");
		scanf("%d",&ch);
		if(isinteger(ch)){
			switch(ch){ 
				case 1: 
					printf("\nEnter the priority(1-3) & charactor : ");
					scanf("%d %c",&b,&a); 
					if(b==1){ 
						enqueue(&q[0],a); 
					} 
					else if(b==2){ 
						enqueue(&q[1],a); 
					}
					else{ enqueue(&q[2],a);
					} 
					printf("\nsuccessful enqueue\n"); 
					break; 
				case 2: 
					if(q[0].front!=NULL){
						dequeue(&q[0]); 
					} 
					else if(q[1].front!=NULL){ 
						dequeue(&q[1]);
					} 
					else{ 
						dequeue(&q[2]);
					}
					if(q[0].front!=NULL && q[1].front!=NULL && q[2].front!=NULL){ 
						printf("\nsuccessful dequeue\n");
					}
					break; 
				case 3: 
					for(int j=1;j<=3;j++){
						printf("q%i: ",j); 
						display(q[j-1]);
					}
					//		printf("\nEnter 1 to continue : "); 
					//		scanf("%d",&m);
					break;
				case 4: 
					printf("\nEnter the number of key: "); 
					scanf("%d",&key); 
					x=(int*)malloc(key*sizeof(int));
					y=(char*)malloc((key+1)*sizeof(char));
					printf("\nFor priority & charactors: ");
					for(k=0;k<key;k++){
						scanf("%d %c",&x[k] ,&y[k]);
					}
					y[++k]='\0';
					priority(q,y,x);
					break;
			}
		}

		else{
			printf("Use only 1-5 value");
			set();
		}

		//System("clear");

	}while(4>=ch && ch>0);

}

int main(void){

	set();

}
