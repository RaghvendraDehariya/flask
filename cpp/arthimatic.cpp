#include<iostream>
using namespace std;


class arth{

	public:

		int a,b;

		void input(){

			cout<<"Enter the number a:";
			cin>>a;
			cout<<"Enter the number b:";
            cin>>b;

		}

		void display(){

			cout<<"The sum of a+b="<<(a+b)<<endl;

			cout<<"The min of a-b="<<(a-b)<<endl;

			cout<<"The mul of a*b="<<(a*b)<<endl;

			cout<<"The sub of a/b="<<(a/b)<<endl;


		}







};


int main(){

	arth Ar;

	Ar.input();

	Ar.display();




















	return 0;
}
