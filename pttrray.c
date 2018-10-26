#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int i;
	char *strptr[3];
	char buf[100];
	
	for(i=0; i<3; i++){
		scanf("%s",buf);
		strptr[i] = (char*) malloc(strlen(buf)+1);
		strcpy(strptr[i],buf);
	}

	for(i=0; i<3; i++){
		printf("%s",strptr[i]);
	}
}
