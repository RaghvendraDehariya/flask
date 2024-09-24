#include<iostream>

using namespace std;

int main(){


	int num,temp,rem,result=0;

	cout<<"Enter a number : ";

	cin>>num;

	temp=num;

	while(temp!=0){


		rem=temp%10;

		result=result*10+rem;

		temp/=10;	


	}

	if(result==num)

		cout<<"the number is palindrome number";

	

	else

		cout<<"the number is not palindrome number";

	










	return 0;
}
