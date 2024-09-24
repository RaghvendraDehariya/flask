
#include<iostream>

using namespace std;

class sm{

	int a,b;

	public:

		sm(int x,int y){

			a=x;
			b=y;

		}

		void show(){

			cout<<"The value is a : "<<a<<",b : "<<b<<endl;

		}



};

int main(){

	sm ram(5,3);

	sm sita=ram;

//	ram.show();
	
	sita.show();




	return 0;
}
