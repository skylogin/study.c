#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* trim(char* phase){
	char* old = phase;
	char* new = phase;

	printf("old:%s\n",old);
	printf("new:%s\n",new);
	printf("phase:%s\n",phase);
	while(*old == ' '){
		old++;
	}
	printf("--------------\n");
	printf("old:%s\n",old);
	printf("new:%s\n",new);
	printf("phase:%s\n",phase);

	while(*old){
		*(new++) = *(old++);
	}
	printf("--------------\n");
	printf("old:%s\n",old);
	printf("new:%s\n",new);
	printf("phase:%s\n",phase);

	*new = 0;
	printf("--------------\n");
	printf("old:%s\n",old);
	printf("new:%s\n",new);
	printf("phase:%s\n",phase);
	return (char*)realloc(phase, strlen(phase)+1);
}

int main(){
	char* buffer = (char*)malloc(strlen("  cat")+1);
	strcpy(buffer,"  cat");
	printf("--------------\n");
	printf("%s\n",trim(buffer));

	return 0;
}
