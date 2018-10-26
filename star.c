#include <stdio.h>
void printStar();
void printRightStar();
void printReverse();

int line=0;
int main(){

	printf("몇줄로 할까요? : ");
	scanf("%d", &line);

	printf("반삼각형 시작");
	printStar();
	printf("\n");

	printf("삼각형 시작");
	printRightStar();

	printf("역삼각형 시작\n");
	printReverse();

	return 0;
}

void printStar(){
	int i,j;

	for(i=0; i<line; i++){
		printf("\n");
		for(j=0; j<=i; j++){
			printf("*");
		}
	}

}

void printRightStar(){
	int i,j,k;

	for(i=0; i<=line; i++){
		for(k=line; k>i; k--){
			printf(" ");
		}
		for(j=0; j<2*i -1; j++){
			printf("*");
		}
		printf("\n");
	}
}

void printReverse(){
	int i,j,k;

	for(i=line; i>0; i--){
		for(j=i; j<line; j++){
			printf(" ");
		}
		for(k=0; k<2*i -1; k++){
			printf("*");
		}
		printf("\n");
	}
}

