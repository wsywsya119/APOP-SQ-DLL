#include"queue.h"

int main()
{

	int back,data,dec;

	printf("Enter the data of the queue's start:\n");
	scanf("%d",&data);
	list* tail=initial(data);

	int loop=1;
	while(loop==1)
	{
		printf("\n");
		printf("Enter 1 for enqueue data\n");
        printf("Enter 2 for dequeue data\n");
        printf("Enter 3 for print all data\n");
        printf("Enter 4 for exit\n");
        printf(">>>>");
		scanf("%d",&dec);

		switch(dec)
		{
			case 1:
			printf("Enter the data for enqueue>\n");
			scanf("%d",&data);
			tail=enqueue(tail,data);
			break;
			case 2:
			tail=dequeue(tail,&back);
			printf("The dequeue data is >> %d \n",back);
			break;
			case 3:
			print_list(tail);
			break;
			case 4:
			free_list(tail);
			loop=0;
			break;
			case 5:
			free_list(tail);
			break;
		}
		if(tail==NULL){
			loop=0;
		}

	}


}
