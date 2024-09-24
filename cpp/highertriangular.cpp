#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class uptriangmatrix {

	private:

		int *A;

		int n;

	public:

		uptriangmatrix() {

			n=2;

			A=new int[(n*(n+1))/2];

		}

		uptriangmatrix(int m) {

			n=m;

			A=new int[(n*(n+1))/2];

		}

		~uptriangmatrix() {

			delete []A;

		}

		void set(int i,int j,int num)
		{
			if(i<=j) {

				A[(j*(j-1)/2)+(i-1)]=num;

			}
		}

		int get(int i,int j) {

			if(i<=j)return A[(j*(j-1)/2)+(i-1)];

			return 0;

		}

		void display() {

			int i,j;

			for(i=1; i<=n; i++) {

				for(j=1; j<=n; j++) {

					if(i<=j)printf("%d ",A[(j*(j-1)/2)+(i-1)]);

					else printf("0 ");
				}

				cout << "" << endl;

			}

		}

};

class uptriangromatrix {

	private:

		int *A;

		int n;

	public:

		uptriangromatrix() {

			n=2;

			A=new int[(n*(n+1))/2];

		}

		uptriangromatrix(int m) {

			n=m;

			A=new int[(n*(n+1))/2];

		}

		~uptriangromatrix() {

			delete []A;

		}

		void set(int i,int j,int num)
		{
			if(i<=j) {

				A[n*(i-1)-((i-1)*(i-2))/2+(j-i)]=num;

			}

		}

		int get(int i,int j) {

			if(i<=j)return A[n*(i-1)-((i-1)*(i-2))/2+(j-i)];

			return 0;

		}

		void display() {

			int i,j;

			for(i=1; i<=n; i++) {

				for(j=1; j<=n; j++) {

					if(i<=j)printf("%d ",A[(n*(i-1))-((i-1)*(i-2))/2+(j-i)]);

					else printf("0 ");
				}

				cout << "" << endl;

			}

		}

};


int main()
{

	int n;

	cout << "Enter the dimension: ";

	cin >> n;

	uptriangmatrix m(n);

	int i,j,x;

	//cout << "Enter the dimension: " << endl;

	cout << "Enter the value in the matrix : " << endl;

	for(i=1; i<=n; i++) {


		for(j=1; j<=n; j++) {

			cin >> x;

			m.set(i,j,x);

		}



	}

	//    cout<<m.get(4,4)<<endl;

	cout << "The matrix is : " << endl;

	m.display();


	return 0;
}
