#include<iostream>

using namespace std;

int main(){

	int num,rem,result=0,temp;

	cout<<"Enter a number:";
	cin>>num;

	temp=num;

	while(temp!=0){

		rem=temp%10;

		result=result*10+rem;

		temp/=10;

	}

	if(num==result)
		cout<<"This is palindrome numberb";

	else
		cout<<"This isn't palindrome numberb";



	return 0;
}
