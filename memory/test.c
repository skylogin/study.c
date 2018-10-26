#include <stdio.h>

int main(){

	FILE *fp = fopen("test.txt","w+b");

	char data = 'a';
	int n = 100000000;

	if(fp == NULL){
		return 0;
	}

	while(1){
		fprintf(fp, "This is Test Line: %d\n", n--);
		if(n == 0){
			break;
		}
	}	
	fclose(fp);

	

	return 0;
}
