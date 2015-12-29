#include"stack.h"

list* initial(int a)
{
	list* tail=cre(a);
	return(tail);
}

list* enqueue(list* a,int b)
{
	list* temp=cre(b);
	temp->next=a;
	a->last=temp;
	return(temp);
}

list* dequeue(list* a,int *data)
{
	list* temp=a;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	*data=temp->data;
	if(temp->last!=NULL){
		temp->last->next=NULL;
		myfree(temp);
	}else{
		myfree(a);
		return(NULL);
	}
	return(a);
}
