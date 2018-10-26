#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char *strptr[3];
	char buf[80];
	int i;

	for(i=0; i<3; i++){
		scanf("%s", buf);
		strptr[i] = (char*) malloc (strlen(buf)+1);
		strcpy(strptr[i],buf);
	}

	for(i=2; i>-1; i--){
		printf("%s\n",strptr[i]);
	}
}

