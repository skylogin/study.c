#include <stdio.h>
int main(){

	char str[255];
	int i=0; int len=0;

	int num;
	scanf("%d", &num);

	while(num > 0){
		str[i++] = num%2;
		len++;
		num/=2;
	}

	for(i=len-1; i>=0; i--){
		printf("%d",str[i]);
	}
		printf("\n");
}

