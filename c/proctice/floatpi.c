#include<stdio.h>
#define PI 3.1415926

float myfunc(float r){

	float a;
	a=PI*r*r;
	return a;

}


int main(){

	float radius,area;

	//float myfunc(float radius);
	
	printf("\nEnter the Radius of a circlr:");

	scanf("%f",&radius);

	area=myfunc(radius);

	printf("\nThe area of the circle is %f\n",area);

	return 0;



}
