#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

template <class t> 

class arthimetic{

	t a;
	t b;

	public:

	arthimetic(t a,t b){

		this->a=a;

		this->b=b;

	}

	t add(){

		t c;

		c=a+b;

		return c;

	}

	t sub(){

		t c;

		c=a-b;

		return c;

	}

	~arthimetic(){

		cout<<"Destractor is Called"<<endl;

	}


};



int main(){

	arthimetic <int> r(20,15);

	cout<<"The sum of a & b is :"<<r.add()<<endl;

	arthimetic <float> r1(9.4,3.6);

	cout<<"The sub of c & d is :"<<r1.sub()<<endl;


	return 0;
}
