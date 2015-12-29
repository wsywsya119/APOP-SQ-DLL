#include"stack.h"


int main()
{

	int back,data,dec;

	printf("Enter the data of the stack's buttom:\n");
	scanf("%d",&data);
	list* top=initial(data); 

	int loop=1;
	while(loop==1){
		printf("\n");
		printf("Enter 1 for push data\n");
		printf("Enter 2 for pop data\n");
		printf("Enter 3 for print the stack\n");
		printf("Enter 4 for exit\n");
		printf(">>>>");
		scanf("%d",&dec);

		switch(dec)
		{
			case 1:
			printf("Enter the data to push>>\n");
			scanf("%d",&data);
			top=push(top,data);
			break;
			case 2:
			top=pop(top,&back);
			printf("The pop data is >> %d \n",back);
			break;
			case 3:
			print_list(top);
			break;
			case 4:
			free_list(top);
			loop=0;
			break;
			case 5:
			free_list(top);
			break;
		}
		if(top==NULL){
			loop=0;
		}
	}


}
