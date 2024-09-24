#include<iostream>
using namespace std;



int ibn(int arr[],int l,int h,int se){

	int mid;


	while(l<=h){

		mid=(l+h)/2;


		if(arr[mid]==se){

			return mid;

		}

		else if(arr[mid]<se){

			l=mid+1;

		}

		else{

			h=mid-1;

		}


	}






	return -1;
}

/*void input(int arr[]){

	cout<<"Enter the Array element ;";

	for(int i=0;i<=9;i++){

		cin>>arr[i];

	}	

}
*/
void ar(int arr[]){

	cout<<"Array = ";

	for(int i=0;i<=29;i++){

		cout<<arr[i]<<" ";

	}	

}

int main(){


	int arr[100]={1,4,6,34,44,65,76,88,89,99,101,111,123,145,150,172,198,201,233,234,437,789,888,999,1111,2222,3333,44444,77839,99999};

	int l=0,h=29,index,se;

	//input(arr);

	ar(arr);

	cout<<"\nEnter the searching element: ";

	cin>>se;

	index = ibn(arr,l,h,se);


	if(index!=-1){


		cout<<"The searching element index is "<<index+1<<endl;

	}


	else{

		cout<<"The element is not in the array."<<endl;

	}















	return 0;
}
