#include <stdio.h>
int main(){
	int i,j;
	int n;

	printf("원하는 수를 입력하세요 : ");
	scanf("%d", &n);

	for(i=2; i<=n; i++){
		for(j=2; j<=i; j++){
			if(i%j ==0){
				break;
			}
		}
		if( i==j){
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
