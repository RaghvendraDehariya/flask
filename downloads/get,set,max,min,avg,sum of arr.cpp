#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Array {

    int A[10];
    int size;
    int length;

};

int get(struct Array arr,int index) {

    if(index>=0 && index<arr.length) {

        for(int i=0; i<arr.length; i++) {

            cout<<endl;

            return arr.A[index];

        }

    }
    cout<<endl;

    return -1;

}

int set(struct Array *arr,int index,int num) {

    if(index>=0 && index<arr->length) {

        for(int i=0; i<arr->length; i++) {

            arr->A[index]=num;

            cout << "" << endl;

            return NULL;

        }

    }

    return -1;

}

int max(struct Array arr) {

    int m;

    m=arr.A[0];


    for(int i=1; i<arr.length; i++) {

        if(m<arr.A[i]) {

            m=arr.A[i];

        }

    }
    cout << "" << endl;

    return m;

}

int min(struct Array arr) {

    int m;

    m=arr.A[0];

    for(int i=1; i<arr.length; i++) {

        if(m>arr.A[i]) {

            m=arr.A[i];

        }

    }

    cout << "" << endl;

    return m;

}

int sum(struct Array arr) {

    int total=0;

    for(int i=0; i<arr.length; i++) {

        total=total+arr.A[i];

    }

    return total;

}

float average(struct Array arr) {

    float total=0,avg;

    for(int i=0; i<arr.length; i++) {

        total=total+arr.A[i];

    }

    avg=total/arr.length;

    return avg;

}

void display(struct Array arr) {

    for(int i=0; i<arr.length; i++)
        cout<<arr.A[i]<<" ";
    cout << "" << endl;

}

int main()
{
    //int g,h;

    struct Array arr= {{1,33,5,7,39,23,46,6,8,10},10,10};

    //cout << "Enter the index and value:" ;

    //cin >> g>>h;

    display(arr);

    //cout<<set(&arr,0,15)<<endl;

    //display(arr);

    //cout << max(arr) << endl;


    cout << "the sum of the array : "<<sum(arr) << endl;
    
    cout<<"the average of the array :"<<average(arr)<<endl;


    return 0;
}