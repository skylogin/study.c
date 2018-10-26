#include <stdio.h>
struct item{
	int score;
	struct item *next;
};

void printall(struct item *p){
	printf("STARt: ");
	while(p){
		printf("%d --> ",p->score);
		p = p->next;
	}
	printf("END\n");
}
