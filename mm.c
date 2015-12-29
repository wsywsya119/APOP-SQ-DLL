#include<stdlib.h>
#include"mm.h"


void* mymalloc(int a)
{
	void *mm=malloc(a);
	return mm;
}

void myfree(void* a)
{
	free(a);
}
