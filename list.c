#include"list.h"
#include"mm.h"


list* cre(int a)
{	
	list* n=(list*)mymalloc(sizeof(list));
	
	n->data=a;
	n->last=NULL;
	n->next=NULL;

	return n;
}

void ins(list* a,list* b)
{
	b->next=a->next;
	a->next->last=b;
	b->last=a;
	a->next=b;
}

void rem(list* a)
{ 
	a->last->next=a->next;
	a->next->last=a->last;
}

void print_list(list* a)
{
	list* n=a;
	while(n!=NULL)
	{
		printf("%d ",n->data);
		n=n->next;
	}
	printf("\n");
}

void free_list(list* a)
{
	
	if(a->next!=NULL)
	{
		free_list(a->next);
	}
	myfree(a);
}

