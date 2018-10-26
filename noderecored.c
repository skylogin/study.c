#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NodeRecord{
	char name[10];
	int kor,eng,math,tot;
	double avg;
	struct NodeRecord* next;
}Node;

Node* Make_List(Node* head, char name[], int kor, int eng, int math);
Node* Del_Node(Node* head, char name[]);
Node* Get_Sum_Avg(Node* head);
void Display(Node* head);

int main(){
	Node* list=NULL;
	list = Make_List(list,"Kim",90,95,90);
	list = Make_List(list,"Lee",95,95,95);
	list = Make_List(list,"Park",90,90,90);
	list = Get_Sum_Avg(list);

	printf("삭제전 리스트\n");
	Display(list);

	printf("삭제후 리스트\n");
	list = Del_Node(list,"Park");
	Display(list);

	return 0;
}

Node* Make_List(Node* head, char name[], int kor, int eng, int math){
	Node* last = head;
	Node* new_node = (Node*)malloc(sizeof(Node));

	strcpy(new_node->name,name);
	new_node->kor = kor;
	new_node->eng = eng;
	new_node->math = math;

	if(head == 0){
		head  = new_node;
	} else {
		while(last->next !=0){
			last=last->next;
		}
		last->next = new_node;
		new_node->next = NULL;
	}

	return head;
}

Node* Del_Node(Node* head, char name[]){
	Node* last = head;
	Node* temp;
	
	for(; last; last=last->next){
		if(strcmp(last->next->name,name) == 0){
			temp = last->next;
			last->next = last->next->next;
			free(temp);
		}
	}

	return head;
}

Node* Get_Sum_Avg(Node* head){
	Node* last = head;
	for(;last;last=last->next){
		last->tot = (last->kor) + (last->eng) + (last->math);
		last->avg = (last->tot) /3;

	}
	return head;

}
void Display(Node* head){
	Node* last = head;
	for(; last; last=last->next){
		printf("%s %d %d %d %d %.2lf\n",last->name,last->kor,last->eng,last->math,last->tot,last->avg);
	}

	return;
}
