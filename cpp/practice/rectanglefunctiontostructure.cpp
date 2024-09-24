#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct rectangle{

int length;

int breadth;

};

void initialijation(struct rectangle *r,int l,int b){
	
	r->length=l;

	r->breadth=b;

}

int area(struct rectangle r){

	return r.length*r.breadth; 

}

int perimeter(struct rectangle r){

	int p;

	p=2*(r.length+r.breadth);

	return p;

}

int main(){

	struct rectangle r={0,0};

	int length=0,breadth=0;

	cout<<"Enter the length & breadth :";

	cin>>length>>breadth;

	initialijation(&r,length,breadth);

	int a=area(r);

	int p=perimeter(r);

	cout<<"area:"<<a<<endl<<"perimeter:"<<p<<endl;

	return 0;
}
