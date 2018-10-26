/*
 * 입력된 정수배열의 랜덤출력
 */

#include <stdio.h>

void shuffle(int testArray[]);
void print(int testArray[]);

int main(){
	int suffleArray[10] = { 1,2,3,4,5,6,7,8,9,10};
	int i;

	printf("원본\n");
	print(suffleArray);

	shuffle(suffleArray);

	printf("변경후\n");
	print(suffleArray);

	printf("\n");
	return 0;
}


void print(int testArray[]){
	int i;
	for(i=0; i<10; i++){
		printf("%d ",testArray[i]);
	}
	printf("\n");
}

void shuffle(int testArray[]){
	int temp =0;
	int rand1 =0;
	int rand2 =0;
	int i;

	for(i=0; i<25; i++){
		rand1 = rand()%10;
		rand2 = rand()%10;
		temp = testArray[rand1];
		testArray[rand1] = testArray[rand2];
		testArray[rand2] = temp;
	}

}
