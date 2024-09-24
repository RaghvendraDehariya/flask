#include<iostream>

using namespace std;

void toh(int n,char s,char a,char d){

	if(n==0){

		return ;

	}

	toh(n-1,s,a,d);

	cout<<"move dist source  "<<s<<"  destination  "<<d<<endl;

	toh(n-1,a,d,s);



}





int main(){

	int n=4;

	char source='R',auxi='A',dest='G';

	toh(n,source,auxi,dest);






	return 0;
}
