#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;




int main(){
	
	int length=0,breadth=0;

	cout<<"Enter the length & breadth ";

	cin>>length>>breadth;

	int area=(length*breadth);

	int perimeter=2*(length+breadth);

	printf("Area:%d\nPerimeter:%d",area,perimeter);
	


	return 0;
}
