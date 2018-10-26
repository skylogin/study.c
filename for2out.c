#include <stdio.h>

int main(){
	int i,j;
	int count =0;

	for(i=0; i<10; i++){
		printf("이것을 %d번째 i포문입니다.\n",i+1);
		for(j=0; j<10; j++){
			printf("이것을 %d번째 j포문입니다.\n",j+1);
			if(j==5){
				break;
			}
		}
		if(j==5){
			break;
		}
		printf("이것을 %d번째 i-2포문입니다.\n",count+1);
		count++;
	}

	return 0;
}

