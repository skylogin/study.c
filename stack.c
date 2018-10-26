#include <stdio.h>
#include <stdlib.h>
typedef struct item{
	int data;
	struct item *next;
}item;

void print(item *start);
void insert(item **p, int value);
void pop(item **p);
int main(){
	item *pStack=NULL;
	
	insert(&pStack,2);
	insert(&pStack,3);
	insert(&pStack,4);
	insert(&pStack,5);
	insert(&pStack,10);

	print(pStack);

	pop(&pStack);
	pop(&pStack);

	print(pStack);

	return 0;
}
void print(item *start){
	printf("START --> ");
	for(; start; start=start->next){
		printf("%d --> ",start->data);
	}
	printf("--> END\n");
}

void insert(item **p, int value){
	item *pAlloc=0;
	pAlloc = (item*)malloc(sizeof(item));
	pAlloc->data = value;
	pAlloc->next = *p;
	*p = pAlloc;
	return;
}

void pop(item **p){
	item *temp;
	temp = *p;
	*p = (*p)->next;
	free(temp);
}
