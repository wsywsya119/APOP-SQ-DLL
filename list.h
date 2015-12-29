#ifndef list_H
#define list_H

#include<stdio.h>
#include<stdlib.h>

typedef struct node list;

typedef struct node{
	int data;
	list* last;
	list* next;
}node;

list* cre(int);
void ins(list*,list*);
void rem(list*);
void print_list(list*);
void free_list(list*);



#endif
