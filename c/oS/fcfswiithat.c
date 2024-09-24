#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){

	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	
	int g[20],gap,pi[20],bt[20],ct[20],at[20],tat[20],wt[20],i,k,n;
	float wtavg,tatavg;

	printf("Enter the number of process -- ");
	scanf("%d",&n);

	for(i=0;i<n;i++){

		printf("Enter the arrival time and burst time for process -- ");

		pi[i]=i+1;
	
		scanf("%d%d",&at[i],&bt[i]);

	}

	for(i=0;i<n;i++){

		for(k=i+1;k<n;k++){

			if(at[i]>at[k]){
			
				swap(&at[i],&at[k]);
				swap(&bt[i],&bt[k]);
				swap(&pi[i],&pi[k]);
			}
			
		}

	}

	g[0]=0;


	for(i=0;i<n;i++){

		g[0]=bt[0]+at[0];
		if(at[i]==at[i-1]){

			g[i]=g[i-1]+bt[i];
			ct[i]=g[i];

		}

		else if(at[i]!=g[i-1]){

			gap=at[i]-g[i-1];
			
			if(gap>0){

				g[i]=g[i-1]+bt[i]+gap;
				ct[i]=g[i];

			}

			else{

				g[i]=g[i-1]+bt[i];
				ct[i]=g[i];

			}

		}
		
		
	}

	wtavg=0;
	tatavg=bt[0];
	ct[0]=at[0]+bt[0];

	for(i=0;i<n;i++){;
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];

	}

	printf("\nPROCESS\tARRIVAL TIME\tBURST TIME\tCOMPLISION TIME\tWAITING TIME\tTURNAROUND TIME\n");
	for(i=0;i<n;i++){

		printf("\nP%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",pi[i],at[i],bt[i],ct[i],wt[i],tat[i]);
	}
		printf("\nAverage Waiting Time -- %f",wtavg/n);	

		printf("\nAverage Turnaround Time -- %f",tatavg/n);

	return 0;
}
