#include <stdio.h>
void hanoiTower(int floor,int from,int temp,int to);
int count=0;

int main(){
	int floor;

	printf("몇층짜리입니까? ");
	scanf("%d",&floor);

	hanoiTower(floor,1,2,3);
	printf("움직인 총횟수는 %d회 입니다.\n",count);

	return 0;
}

void hanoiTower(int floor,int from,int temp,int to){
	count++;

	if(floor ==1){
		printf("원형돌1을 %d에서 %d로 움직입니다\n",from,to);
	} else{
		hanoiTower(floor-1, from, to, temp);
		printf("원형돌%d을 %d에서 %d로 움직입니다\n",floor,from,to);
		hanoiTower(floor-1, temp, from, to);
	}
}

