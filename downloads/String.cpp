#include<iostream>
#include<stdio.h>

using namespace std;

int valide(char A[]) {

    int i;

    for(i=0; A[i]!='\0'; i++) {

        if(!(A[i]>=65 && A[i]<=90)&& !(A[i]>=97 && A[i]<=122)&& !(A[i]>='1' && A[i]<='0') && !(A[i]==' ')) {

            return -1;

        }

    }

    return 0;

}

bool reverse(char A[]) {

    char temp;
    int i;
    for(i=0; A[i]!='\0'; i++) {}

    int j=i-1;

    /*for(j,i=0; i<j; j--,i++) {

        temp=A[i];

        A[i]=A[j];

        A[j]=temp;

    }

    cout << A << endl;*/

    for(j,i=0; i<j; j--,i++) {

        if(A[i]!=A[j]) {

            //cout << "this string isn't palindrome" << endl;

            return false;
        }


    }

    return true;


}

bool reverse1(char A[],int size) {

    char B[size],temp;
    int i;
    for(i=0; A[i]!='\0'; i++) {}

    int j=i-1;

    for(j,i=0; j>=0; j--,i++) {

        B[i]=A[j];

    }

    B[i+1]='\0';

    //cout << B << endl;

    for(j=0,i=0; A[i]!='\0' && B[j]!='\0'; j++,i++) {

        if(A[i]!=B[j]) {

            //cout << "this string isn't palindrome" << endl;

            return false;
        }


    }

    return true;

}



int main() {

    int i,j,vcount=0,ccount=0,word=0,count=1;

    char A[]="findingin";

    cout << A << endl;

    for(i=0; A[i]!='\0'; i++) {

        if(A[i]!=-1) {

            for(j=i+1; A[j]!='\0'; j++) {

                if(A[i]==A[j]) {

                    count++;
                    A[j]=-1;

                }

            }

            if(count>1) {

                printf("%c appear in %d times\n",A[i],count);
                
                count=1;
                
            }


        }


    }

    //cout<<reverse1(A,5);

    //cout << valide(A)<<endl;

    /*for(i=0;A[i]!='\0';i++){

        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){

            vcount++;

        }

        else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122)){

            ccount++;

        }

        if(A[i]==' ' && A[i-1]!=' '){

            word++;

        }


    }*/

    //printf("in this string %d vowels and %d consnants",vcount,ccount);

    //printf("%d word in this string",word+1);



    return 0;
}

//A to Z == 65 to 90
//a to z == 97 to 122

//nation level language called unicode
//there are only 0 to 127 ASCII values