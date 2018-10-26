/*
 * srand를 이용한 구구단 문제
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gugudan();

int main(){
	srand(time(NULL));
	gugudan();
	printf("\n");
}
void gugudan(){
	int x,y;
	int i;
	int answer;

	for(i=0; i<10; i++){
		x=(rand() % 10) +1;
		y=(rand() % 10) +1;

		printf("%d.%d x %d = ",i+1,x,y);
		scanf("%d",&answer);
		if(answer == x*y){
			printf("\tO\n");
		}else{
			printf("\tX -> %d\n",x*y);
		}
	}
}
