#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}
node;

int main(int argc,char *argv[])
{
	node *list=NULL;

	for(int i=1;i<argc;i++)
	{
		node *n;
		n=malloc(argc*sizeof(int));

		if(n==NULL)
		{
			free(list);
			return 1;
		}

		n->number = atoi(argv[i]);
		n->next = NULL;

		n->next=list;
		list=n;

	}

	node *ptr=list;

	while(ptr!=NULL)
	{
		printf("%i\n",ptr->number);
		ptr=ptr->next;
	}

	ptr=list;

	while(ptr!=NULL)
	{
		ptr=list->next;
		free(list);
		list=ptr;
	}
	
	printf("%p\n",list);

	return 0;

}
