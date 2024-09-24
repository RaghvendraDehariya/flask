
#include<iostream>

using namespace std;

class state{


	static int x;
	int y;

	public:

	state (int a,int b){

		x=a;
		y=b;

	}

	void show(){

		cout<<x<<" "<<y<<endl;
		

	}

	static void input(){

		cout<<x<<endl;
		

	}









};

int state::x=0;

int main(){

	state obj(6,8);

	obj.show();

	obj.input();




	return 0;
}
