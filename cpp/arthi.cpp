
#include<iostream>

using namespace std;

class arth{

	public:

		int sum(int a,int b){

			cout<<"The sum of a and b is : "<<a+b<<endl;
			return a+b;

		} 


		int sub(int a,int b){


			cout<<"The substraction of a and b is : "<<a-b<<endl;
			return 0;

		}

		int mul(int a,int b){

			cout<<"The multiplication of a and b is : "<<a*b<<endl;
			return 0;

		} 


		int div(int a,int b){

			cout<<"The divition of a and b is : "<<a/b<<endl;
			return 0;

		}










};




int main(){

	arth ar;
	int a,b;

	cout<<"Enter the the value of a and b : ";
	cin>>a>>b;

	ar.sum(a,b);
	ar.sub(a,b);
	ar.mul(a,b);
	ar.div(a,b);




	return 0;
}
