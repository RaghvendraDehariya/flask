#include<iostream>

using namespace std;

int main(){

	int num,rem,result=0,temp;

	cout<<"Enter a number:";
	cin>>num;

	temp=num;

	while(temp!=0){

		rem=temp%10;

		result+=rem*rem*rem;

		temp/=10;

	}

	if(num==result)

		cout<<"This is a armstrong number";

	else

		cout<<"This isn't a armstrong number";




	return 0;
}
