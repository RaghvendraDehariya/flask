#include<stdio.h>
#include<stdlib.h>

int binarysearch(int A[],int l,int h,int key){

	int mid;

	if(l<=h){
		mid=(h+l)/2;
		if(A[mid]==key){
			return mid;
		}
		else if(A[mid]>key){
			return binarysearch(A,l,mid-1,key);
		}
		else{	
			return binarysearch(A,mid+1,h,key);
		}

	}

	return -1;
}
int ibt(int A[],int l,int h,int key);
int main(){

	int A[]={1,2,3,4,5,6,7,8,9,11};
	int n;

	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
	}

	printf("\nEnter a number: ");

	scanf("%d",&n);

	printf("\nThe key element found in index: %d",ibt(A,0,9,n));


	return 0;
}

int ibt(int A[],int l,int h,int key){

	int mid;

	while(l<=h){
		mid=(l+h)/2;

		if(A[mid]==key)
			return mid;
		
		else if(A[mid]>key)
			h=mid-1;
		
		else
			l=mid+1;
		
	}

	return -1;

}

