#include<iostream>

using namespace std;

class matrix{

	private:
		int *A;
		int n;
	public:
		matrix(){

			n=2;

			A=new int [n];


		}

		matrix(int n){

			this->n=n;

			A=new int [n];

		}

		~matrix(){

			delete []A;


		}


		void set(int i,int j,int num);
		int get(int i,int j);
		void display();
};

void matrix::set(int i,int j,int num){

	if(i==j)

		A[i-1]=num;

}

int matrix::get(int i,int j){

	if(i==j)
		return A[i-1];

	return 0;

}

void matrix::display(){

	int i,j;

	for(i=0;i<n;i++){

		for(j=0;j<n;j++){

			if(i==j){
				cout<<A[i]<<" ";
			}
			else{
				cout<<"0 ";
			}

		}

		cout<<endl;

	}

}

int main(){

	matrix m(4);

	m.set(1,1,3);
	m.set(2,2,6);
	m.set(3,3,9);
	m.set(4,4,5);

	cout<<m.get(3,3)<<endl;

	m.display();

	return 0;
}
