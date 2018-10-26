#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NodeRecord{
	char name[10];
	int kor, eng, math, tot;
	double avg;
	struct NodeRecord* next;
} Node;

int count =0;

Node* Make_List(Node* head, char name[], int kor, int eng, int math);
Node* Del_Node(Node* head, char name[]);
Node* Get_Sum_Avg(Node* head);
void Display(Node* head);
Node* Del_Node(Node* head, char name[]);

//main함수 
int main() {
	    Node* list=NULL; //빈 노드 list 선언 
					    
					  list=  Make_List(list, "Kim", 90, 95, 90); //이러면 안되나? 
					    Display(list);
					  list=  Make_List(list, "Lee", 95, 95, 95);
					    Display(list);
					    list = Make_List(list, "Park", 90, 90, 90);
					    Display(list);
					   list = Get_Sum_Avg(list); //총점과 평균을 구한다 
					    Display(list);
							    list = Del_Node(list, "Park");
					    Display(list);
							    
							    return 0;
}

//총점과 평균을 구하는 Get_Sum_Avg 함수 
Node* Get_Sum_Avg(Node * head) {

	Node* start = head;
	while(start->next !=0){
		start->tot = (start->kor) + (start->eng) + (start->math);
		start->avg = (start->tot)/3;
		printf("%d %lf  d이것은 합계와 평균값 %d\n",start->tot, start->avg, count);
		start = start->next;
	}

	return start;
}

//받은 인자값을 구조체에 넣어주는 Make_List 함수 
Node* Make_List(Node* head, char name[], int kor, int eng, int math) {
	      Node* new_node = 0; // new_node를 선언후 초기화 
			  new_node = (Node*)malloc(sizeof(Node)); //동적메모리 할당 
				strcpy(new_node->name,name); //이름 대입 
				new_node->kor = kor; // 국어점수 대입 
				new_node->eng = eng; //영어점수 대입 
			  new_node->math = math; //수학점수 대입 

					new_node->next = head;
					head = new_node;
																			      
				return head; // new_node를 반환 
}

//학생의 이름, 성적을 출력하는 Display 함수 
void Display(Node* head) {
	for(; head; head=head->next){
		printf("%s, %d, %d, %d, %d, %f\n",head->name, head->kor, head->eng, head->math, head->tot, head->avg);
	}
	printf("%d번째 출력문입니다.\n\n",count);
	count++;
}

//삭제하는 함수?? 
Node* Del_Node(Node* head, char name[]){
	      Node* temp = 0; //빈 노드 temp 선언후 초기화 
				while(head->next != 0) {
					if(head->next->name == name) {							
						temp = head->next;
						head = head->next->next;
						free(temp);
					}
				
				}
}
