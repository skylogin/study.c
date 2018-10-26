#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
	time_t cur_time;
	srandom(time(&cur_time));
	char *strptr[5];
	char buf[100];
	int i;
	int randomNum = (int)random()%5;

	for(i=0; i<5; i++){
		fgets(buf,100,stdin);
		strptr[i] = (char*) malloc(strlen(buf)+1);
		strcpy(strptr[i],buf);
	}

	printf("%s\n",strptr[randomNum]);
}
