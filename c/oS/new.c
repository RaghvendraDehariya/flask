#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){

	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){

	int g[20],gap,pi[20],bt[20],ct[20],at[20],tat[20],wt[20],i,k,n,temp,temp2,*rq;
	float wtavg,tatavg;

	rq=(int *)malloc(sizeof(int));

	printf("Enter the number of process -- ");
	scanf("%d",&n);

	for(i=0;i<n;i++){

		printf("Enter the burst time for process -- ");

		pi[i]=i+1;

		scanf("%di",&bt[i]);

	}



	for(i=0;i<n;i++){

		temp=bt[i];
		for(k=i+1;k<n;k++){

			if(temp>bt[k]){
				temp2=bt[k];
				swap(&temp,&temp2);
				swap(&pi[i],&pi[k]);
				swap(&bt[i],&bt[k]);
				swap(&at[i],&at[k]);
				temp=temp-1;

			}

		}

	}


	wtavg=0;
	tatavg=bt[0];


	for(i=0;i<n;i++){;
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];

	}

	printf("\nPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
	for(i=0;i<n;i++){

		printf("\nP%d\t\t%d\t\t%d\t\t%d",pi[i],bt[i],wt[i],tat[i]);
	}
	printf("\nAverage Waiting Time -- %f",wtavg/n);	

	printf("\nAverage Turnaround Time -- %f",tatavg/n);

	return 0;
}
