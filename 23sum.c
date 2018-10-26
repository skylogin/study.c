#include <stdio.h>
int main(){
	int n[24];
	int i;
	int sum=0;
	float avg =0;

	for(i=0; i<24; i++){
		printf("%d번째값을 입력하세요.\n",i+1);
		scanf("%d",&n[i]);
		if(i==22){
			printf("23번째 값은 %d\n",n[i]);
		}
		sum = sum + n[i];
		avg = (float)sum / (i+1);
		printf("합계 = %d, 평균 = %.2f\n",sum,avg);
	}
}
