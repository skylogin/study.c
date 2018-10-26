#include <stdio.h>
struct item{
	int score;
	struct item *next;
};

void printall(struct item *);

int main(){
	struct item A, B, C, *first;

	A.score = 1;
	B.score = 2;
	C.score = 3;
	first = &A;

	C.next = first;
	first = &C;

	A.next = &B;
	B.next = 0;

	printall(first);
}
