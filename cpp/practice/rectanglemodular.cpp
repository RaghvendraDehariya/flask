#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//void initialijation(int l,int b){}

int area(int l,int b){

	return l*b; 

}

int perimeter(int l,int b){

	int p;

	p=2*(l+b);

	return p;

}

int main(){

	int length=0,breadth=0;

	cout<<"Enter the length & breadth :	";

	cin>>length>>breadth;

	//initialijation(length,breadth);

	int a=area(length,breadth);

	int p=perimeter(length,breadth);

	cout<<"area:"<<a<<endl<<"perimeter:"<<p<<endl;

	return 0;
}
