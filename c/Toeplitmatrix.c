#include<stdio.h>
#include<stdlib.h>

struct matrix
{

	int *A;

	int n;

};

void set(struct matrix *m,int i,int j,int x)
{


	if(i<=j)
		m->A[j-i]=x;

	else if(i>j)
		m->A[m->n-1+i-j]=x;


}

int get(struct matrix m,int i,int j)
{

	if(i<=j)
		return m.A[j-i];


		return m.A[m.n-1+i-j];

}

void create(struct matrix *m){

	int i,j,x;

	printf("Enter the element: \n");
	
	m->A=(int *)malloc((2*m->n-1)*sizeof(int ));


	for(i=1;i<=m->n;i++){

		for(j=1;j<=m->n;j++){

			scanf("%d",&x);

			set(m,i,j,x);

		}

	}

}


void display(struct matrix m){

	int i,j;

	printf("The matrix is: \n");

	for(i=1;i<=m.n;i++){

		for(j=1;j<=m.n;j++){

			if(i<=j)
				printf("%d ",m.A[j-i]);

			else
				printf("%d ",m.A[m.n-1+i-j]);


		}

		printf("\n");
	}

}



int main(){

	struct matrix m;

	printf("Enter the dimesion: ");

	scanf("%d",&m.n);

	create(&m);

	printf("\n");

	display(m);





	return 0;
}
