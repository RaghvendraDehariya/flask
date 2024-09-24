#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


void swap(int &x,int &y){

	int temp;

	temp=x;

	x=y;

	y=temp;

}



int main(){

	int a=23,b=59;

	swap(a,b);

	cout<<a<< " " <<b<<endl;



	return 0;
}
