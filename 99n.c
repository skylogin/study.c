#include <stdio.h>
int main(){
	int i=0;
	int sum=0;

	while(sum <99){
		i++;	
		sum += i;
	}

	printf("%d\n",i);
}
