#include <stdio.h>
int main(){
	int c;
	int count=0;

	while(c !=EOF){
		c=getchar();
		printf("count = %d\n",count);
		count++;
	}

	printf("%d\n",count);
	return 0;
}

