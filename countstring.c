#include <stdio.h>

int check(char arr[]);

int main(){
	char arr[100];
	int count;
	printf("문자열을 입력하세요 \n");
	gets(arr);

	count = check(arr);
	printf("%s\n",arr);
	printf("단어의 갯수는 %d\n",count);
	
	return 0;
}

int check(char arr[]){
	int i=0;
	int count=1;

	while(arr[i] != '\0'){
		if(arr[i] == ' '){
		count ++;
		}
		i++;
	}

	return count;
}

