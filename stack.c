#include"stack.h"

list* initial(int a)
{
	list* top=cre(a);
	return(top);
}

list* push(list* a,int b)
{
	list* temp=cre(b);
	temp->next=a;
	a->last=temp;
	return(temp);
}

list* pop(list* a,int *data)
{
	list* temp=a;
	*data=a->data;
	a=a->next;
	myfree(temp);
	return(a);
}
