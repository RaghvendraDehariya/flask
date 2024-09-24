#include<iostream>
#define pi 3.1416
using namespace std;

float cir(int r){

	float ci;

	ci=2*pi*r;

	return ci;

}

int main(){

	int a;

	cout<<"Enter a number:";
	cin>>a;

	cout<<cir(a);


	return 0;
}
