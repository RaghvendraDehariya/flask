#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void find(int A[],int l,int h,int size) {

    int diff=l-0;

    for(int i=0; i<size; i++) {

        if(A[i]-i!=diff) {

            while(diff<A[i]-i) {

                printf("%d ",diff+i);

                diff++;
            }
        }

    }

}

int findinnaturalnumber(int A[],int n,int h) {

    int sum,sum2=0,rem;

    sum=(h*(h+1))/2;

    for(int i=0; i<n; i++) {

        sum2=sum2+A[i];

    }

    rem=sum-sum2;

    return rem;


}

void newmehtodfind(int A[],int l,int h,int size) {

    int *H;

    H=new int[h];

    for(int i=0; i<size; i++) {

        H[A[i]]++;

    }

    cout << "Missing Element is " << endl<<endl;

    for(int i=l; i<=h; i++) {

        if(H[i]==0) {

            printf("%d ",i);

        }

    }

}

void swap(int *a,int *b) {

    int temp;

    temp=*a;

    *a=*b;

    *b=temp;

}

void duplicate(int A[],int size) {

    int lastduplicate=0;

    for(int i=0; i<size; i++) {

        if(A[i]==A[i+1]  && lastduplicate!=A[i]) {

            cout << A[i]<<" ";

            lastduplicate=A[i];

        }

    }


}

void duplicateandcount(int A[],int size ) {

    for(int i=0; i<size-1; i++) {

        if(A[i]==A[i+1]) {

            int j=i+1;
            while(A[j]==A[j+1])j++;

            cout << A[i]<<" is duplicate in "<<j-i<<" times" << endl;

            i=j-1;

        }

    }

}


void newmehtodfindduplicate(int A[],int l,int h,int size) {

    int *H;

    H=new int[h];


    for(int i=0; i<size; i++) {

        H[A[i]]++;

    }

    cout << "Duplicate Element is " << endl<<endl;

    for(int i=l; i<=h; i++) {

        if(H[i]>1) {

            printf("%d appear in %d times\n",i,H[i]);

        }

    }

}

void duplicateunsorted(int A[],int size) {

    int count=1;



    for(int i=0; i<size-1; i++) {
        if(A[i]!=-1) {
            for(int j=i+1; j<size; j++) {

                if(A[i]==A[j]) {

                    count++;
                    A[j]=-1;

                }

            }

            if(count>1) {

                cout << A[i]<<" is appear in "<<count<<" times" << endl;

                count=1;
            }

        }
    }
}

void valuefind(int A[],int size,int k) {

    for(int i=0; i<size-1; i++) {

        for(int j=i+1; j<size; j++) {

            if(A[i]+A[j]==k) {

                printf("%d+%d=%d\n",A[i],A[j],k);

            }

        }
    }

}

void valuefind2(int A[],int size,int h,int k) {

    int *H;

    H=new int[h];

    for(int i=0; i<size; i++) {

        if(H[k-A[i]]!=0) {

            printf("%d+%d=%d\n",A[i],k-A[i],k);

        }

        H[A[i]]++;

    }

}

void new1(int A[],int size,int k) {

    int i,j;
    i=0;
    j=size-1;

    while(i<j) {

        if(A[i]+A[j]==k) {

            printf("%d+%d=%d\n",A[i],k-A[i],k);

            i++;

            j--;

        }
        
        else if(A[i]+A[j]<k){
            
            i++;
            
        }
        
        else j--;


    }

}

int main()
{

    int A[15]= {1,2,4,6,7,8,9,10,11,12,13,14};

    //swap(A[0],A[10]);

    for(int i=0; i<12; i++) {

        cout << A[i]<<" ";

    }


    cout << "" << endl<<endl;
    
    new1(A,12,12);

    //valuefind2(A,12,14,10);

//    duplicateunsorted(A,12);

    //duplicateandcount(A,8);

    // newmehtodfind(A,1,16,15);

    // newmehtodfindduplicate(A,0,9,12);

    return 0;
}