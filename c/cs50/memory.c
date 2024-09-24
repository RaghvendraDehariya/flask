#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *x=malloc(3*sizeof(int));
	
	if(x==NULL)
	{
		free(x);
		return 1;
	}


	x[0]=20;
	x[1]=40;
	x[2]=60;

	free(x);
	
	return 0;

}
