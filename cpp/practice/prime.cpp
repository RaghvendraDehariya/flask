#include<iostream>

using namespace std;

int main(){

	int num;

	cout<<"Enter a number:";
	cin>>num;

	for(int i=2;i<num;i++){

		if(num%i==0){

			cout<<"The number isn't prime";

			return 0;

		}

		else{

			cout<<"The number is prime";

			return 0;

		}


	}





	return 0;
}
