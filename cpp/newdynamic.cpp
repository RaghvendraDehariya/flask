#include<iostream>

using namespace std;

class dyna{

	private:

		char *a;

	public:


		dyna(){


			a=new char[12];

			a="radhakrishna";


		}

		void show(){

			cout<<"hare hare "<<a<<endl;

		}

};


int main(){

	dyna s;

	s.show();







	return 0;
}
