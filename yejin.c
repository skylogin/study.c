#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
	element data;
	struct ListNode *link;
} ListNode;

void error(char *message){
	fprintf(stderr,"%s\n",message);
	exit(1);
}

void insert_node(ListNode **phead, ListNode *p, ListNode *new_node){
	if(*phead == NULL){
		new_node->link = NULL;
		*phead = new_node;
	} else if(p == NULL){
		new_node->link = *phead;
		*phead = new_node;
	} else{
		new_node->link = p->link;
		p->link = new_node;
	}

}

void remove_node(ListNode **phead,ListNode *p,ListNode *removed){
	if(p == NULL){
		*phead = (*phead)->link;
	} else{
		p->link = removed->link;
	}
	free(removed);
}

void display(ListNode *head){
	ListNode *p = head;
	if(p != NULL){
		printf("%d->",p->data);
		display(p->link);
	}
}

ListNode *search(ListNode *head,int x){
	ListNode *p;
	p = head;
	while(p != NULL){
		if(p->data == x){
			return p;
		}
		p = p->link;
	}

	return p;
}

ListNode *create_node(element data,ListNode *link){
	ListNode *new_node;
	new_node = (ListNode *)malloc(sizeof(ListNode));
	if(new_node==NULL){
		error("메모리 할당 에러");
		exit(1);
	} else{
			new_node->data=data;;
			new_node->link=link;
			return(new_node);
	}
}

int main(){
	ListNode *list1=NULL,*list2=NULL;
	ListNode *p;

	//List1 = 30->20->10

	insert_node(&list1,NULL,create_node(10,NULL));
	insert_node(&list1,NULL,create_node(20,NULL));
	insert_node(&list1,NULL,create_node(30,NULL));
	display(list1);

	remove_node(&list1, NULL, list1);
	display(list1);

	insert_node(&list2,NULL,create_node(60,NULL));
	insert_node(&list2,NULL,create_node(70,NULL));
	insert_node(&list2,NULL,create_node(80,NULL));
	display(list2);


	/*
	list1 = concat(list1, list2);
	display(list1);

	list1 = reverse(list1);
	display(list1);
	*/

	p = search(list1, 20);
	printf("탐색신공: %d\n",p->data);

	return 0;
}
