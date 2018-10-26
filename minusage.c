/*
 * 생년월일입력 후 만나이 계산
 */

#include <stdio.h>
#include <stdlib.h>

void cheakYear(int x);
void cheakMonth(int x);
void cheakDay(int x,int y);
void cheak(int x, int y, int z);
	
int currentYear = 2011;
int currentMonth = 9;
int currentDay = 1;

int main(){

	int year,month,day;

	printf("What's your Birth Year? ");
	scanf("%d", &year);
	cheakYear(year);

	printf("What's your Birth Month? ");
	scanf("%d", &month);
	cheakMonth(month);

	printf("What's your Birth Day? ");
	scanf("%d", &day);
	cheakDay(year,day);

	cheak(year,month,day);

	return 0;
}

void cheakYear(int x){
	if(x>2011){
		printf("year error\n");
		exit(0);
	} else if(x<0){
		printf("year error\n");
		exit(0);
	}
}

void cheakMonth(int x){
	if(x>12){
		printf("month error\n");
		exit(0);
	} else if(x<0){
		printf("month error\n");
		exit(0);
	}
}
void cheakDay(int x, int y){
	if(y>31){
		printf("day error\n");
		exit(0);
	} else if(y<0){
		printf("day error\n");
		exit(0);
	} else if(x==2){
		if(y>29){
			printf("day error\n");
			exit(0);
		}
	}
}

void cheak(int x, int y, int z){
	int tempYear,tempMonth,tempDay;
	int result = 0;	

	tempYear = currentYear - x;
	tempMonth = currentMonth - y;
	tempDay = currentDay - z;

	/*
	printf("======test1=======\n");
	printf("1.%d, %d, %d\n",currentYear,currentMonth,currentDay);
	printf("2.%d, %d, %d\n",tempYear,tempMonth,tempDay);
	printf("3.%d\n",result);
	*/

	if(tempMonth < 0){
		result = tempYear -1;
	} else if(tempMonth == 0){
		if(tempDay < 0){
			result = tempYear -1;
		} else{
			result = tempYear;
		}
	} else{
		result = tempYear;
	}

/*
	printf("=======test2=======\n");
	printf("1.%d, %d, %d\n",currentYear,currentMonth,currentDay);
	printf("2.%d, %d, %d\n",tempYear,tempMonth,tempDay);
	printf("3.%d\n",result);
*/
	printf("current your age : %d\n",result);
}
