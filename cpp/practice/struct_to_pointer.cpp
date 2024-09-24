#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle{

	int l;

	int b;
};

int main(){

	/*rectangle r={10,20};

	struct rectangle *ptr;

	ptr=&r;

	printf("%d\n",r.l);

	printf("%d\n",r.b);


	printf("%d\n",ptr->l);

	printf("%d\n",ptr->b);
	*/


	struct rectangle *ptr;

//	ptr=(struct rectangle *)malloc(sizeof(struct rectangle));

	ptr=new rectangle;

	//ptr->l=46;
	//ptr->b=58;

	(*ptr).l=23;

	(*ptr).b=96;

	printf("%d\n",ptr->l);

	printf("%d\n",ptr->b);





	delete ptr;
	//free(ptr);
	return 0;
}
