#include <stdio.h>

void check(int n);
int main(){
	int answer;

	printf("Number : ");
	scanf("%d",&answer);

	check(answer);

	return 0;
}

void check(int n){
	if (n == 0){
		printf("0 = 0\n");
	} else if(n%2 ==0){
		printf("even\n");
	} else {
		printf("odd\n");
	}

}
