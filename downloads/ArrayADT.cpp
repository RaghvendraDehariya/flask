#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Array {

    int A[10];
    int size;
    int length;

};


void display(struct Array arr) {

    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    cout << "" << endl;

}

void  insertinsortedarray(struct Array &arr,int num) {

    int i;

    i=arr.length-1;

    if(arr.size>arr.length) {

        while(arr.A[i]>num && i>=0) {

            arr.A[i+1]=arr.A[i];
            i--;

        }

        arr.A[i+1]=num;

        arr.length++;

    }

    else {

        cout<<"Array is full this value "<<num<<" does not insert"<<endl;

    }

}

bool sortedarray(struct Array arr) {

    int i=0;

    while(i<arr.length-1) {

        if(arr.A[i]>arr.A[i+1]) {

            return false;

        }

        i++;
    }
    return true;
}

void swap(int &a,int &b) {
    int temp;

    temp=a;
    a=b;
    b=temp;
}

void negativeshorting(struct Array &arr) {

    for(    int i=0,j=arr.length-1; i<j;) {

        while(arr.A[i]<0) {
            i++;
        }
        while(arr.A[j]>=0) {
            j--;
        }
        if(i<j) {

            swap(arr.A[i],arr.A[j]);

        }

    }

}

struct Array *merge(struct Array *arr1,struct Array *arr2) {

    int i,j,k;

    i=j=k=0;

    struct Array *arr3;

    arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length && j<arr2->length) {

        if(arr1->A[i]<arr2->A[j])

            arr3->A[k++]=arr1->A[i++];

        else

            arr3->A[k++]=arr2->A[j++];

    }

    for(; i<arr1->length; i++)

        arr3->A[k++]=arr1->A[i];


    for(; j<arr2->length; j++)

        arr3->A[k++]=arr1->A[j];

    arr3->length=arr1->length+arr2->length;

    arr3->size=10;

    return arr3;

}

struct Array *Union(struct Array *arr1,struct Array *arr2) {

    int i,j,k;

    i=j=k=0;

    struct Array *arr3;

    arr3=(struct Array *)malloc(sizeof(struct Array));

    arr3->length=arr1->length+arr2->length;


    while(i<arr1->length && j<arr2->length) {

        if(arr1->A[i]<arr2->A[j]) {

            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr1->A[i]>arr2->A[j]) {

            arr3->A[k++]=arr2->A[j++];
        }
        else {

            arr3->A[k++]=arr1->A[i++];
            j++;

            arr3->length--;

        }
    }


    for(; i<arr1->length; i++) {

        arr3->A[k++]=arr1->A[i];

    }
    for(; j<arr2->length; j++) {

        arr3->A[k++]=arr1->A[j];
    }

    arr3->size=k;

    return arr3;

}

struct Array *Intersection(struct Array *arr1,struct Array *arr2) {

    int i,j,k;

    i=j=k=0;

    struct Array *arr3;

    arr3=(struct Array *)malloc(sizeof(struct Array));

    arr3->length=0;

    while(i<arr1->length && j<arr2->length) {

        if(arr1->A[i]<arr2->A[j]) {

            i++;
        }
        else if(arr1->A[i]>arr2->A[j]) {

            j++;
        }
        else {

            arr3->A[k++]=arr1->A[i++];
            j++;

            arr3->length++;
        }
    }



    arr3->size=k;

    return arr3;

}

struct Array *Difference(struct Array *arr1,struct Array *arr2) {

    int i,j,k;

    i=j=k=0;

    struct Array *arr3;

    arr3=(struct Array *)malloc(sizeof(struct Array));

    arr3->length=0;

    while(i<arr1->length && j<arr2->length) {

        if(arr1->A[i]<arr2->A[j]) {

            arr3->A[k++]=arr1->A[i++];

            i++;

            arr3->length++;
        }
        else if(arr1->A[i]>arr2->A[j]) {

            j++;
        }
        else {

            i++;
            j++;

        }
    }

    for(; i<arr1->length; i++)
    {

        arr3->A[k++]=arr1->A[i];

        arr3->length++;
    }
    arr3->size=k;

    return arr3;

}





int main() {

    struct Array arr1= {{2,24,65,73,99},10,5};
    struct Array arr2= {{6,24,45,73,78},10,5};
    struct Array *arr3;

    display(arr1);
    display(arr2);

    cout<<endl;

    arr3=Union(&arr2,&arr1);

    display(*arr3);

    cout << arr3->size << endl;

    delete arr3;

    return 0;
}