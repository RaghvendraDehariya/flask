#include<stdio.h>
#include<stdlib.h>

struct matrix{

	int *A;

	int n;

};

void set(struct matrix *m,int i,int j,int num){

	if(i>=j){

		m->A[(i*(i-1)/2)+(j-1)]=num;

	}


}

int get(struct matrix m,int i,int j){

	if(i>=j)

		return m.A[(i*(i-1)/2)+(j-1)];

	return 0;

}

void display(struct matrix m){

	int i,j;

	for(i=1;i<=m.n;i++){

		for(j=1;j<=m.n;j++){

			if(i>=j)

				printf("%d ",m.A[(i*(i-1)/2)+(j-1)]);

			else
				printf("0 ");


		}
		
		printf("\n");

	}
	

}


int main(){

	struct matrix m;

	int i,j,num;

	printf("enter the dimension: ");

	scanf("%d",&m.n);

		m.A=(int *)malloc((m.n*(m.n+1)/2)*sizeof(int ));

	for(i=1;i<=m.n;i++){

		for(j=1;j<=m.n;j++){

			scanf("%d",&num);

				set(&m,i,j,num);
		
		}

	}


	printf("the given matrix is: \n\n");

	display(m);






	return 0;
}



