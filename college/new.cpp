#include <iostream>

using namespace std;

int main(){


	char Input[100];
	
	cout<<"Enter a string to validate (input string should be of 0 and 1): ";
	
	cin>>Input;
	
	int i=-1;
	

	A:
		i++;
		if(Input[i]=='0')
		{
			goto E;
		}
		else if(Input[i]=='1')
		{
			goto B;
		}
		else if(Input[i]=='\0')
		{
			goto Invalid;
		}
		else
		{
			goto Wrong;
		}


	B:
		i++;
		if(Input[i]=='0')
		{
			goto E;
		}
		else if(Input[i]=='1')
		{
			goto C;
		}
		else if(Input[i]=='\0')
		{
			goto Invalid;
		}
		else
		{
			goto Wrong;
		}



	C:
		i++;
		if(Input[i]=='0')
		{
			goto E;
		}
		else if(Input[i]=='1')
		{
			goto D;
		}
		else if(Input[i]=='\0')
		{
			goto Invalid;
		}
		else
		{
			goto Wrong;
		}



	D:
		i++;
		if(Input[i]=='0')
		{
			goto D;
		}
		else if(Input[i]=='1')
		{
			goto D;
		}
		else if(Input[i]=='\0')
		{
			goto Valid;
		}
		else
		{
			goto Wrong;
		}


	E:
		i++;
		if(Input[i]=='0')
		{
			goto E;
		}
		else if(Input[i]=='1')
		{
			goto E;
		}
		else if(Input[i]=='\0')
		{
			goto Invalid;
		}
		else
		{
			goto Wrong;
		}
		
	Valid:

		cout<<"\n Output: Valid String";
		goto exit;
	
	Invalid:
		
		cout<<"\n Output: Invalid String";
		goto exit;

	Wrong:
	
		cout<<"\n Please enter binary string {format of 0, 1}";
	

	exit:

	return 0;
}
