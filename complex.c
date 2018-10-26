#include <stdio.h>
struct complex{
	double real_part;
	double imag_part;
};
int main(){
	struct complex A[5];
	int i,j;
	int temp;

	printf("실수부 입력\n");

	for(i=0; i<5; i++){
		scanf("%lf %lf",&A[i].real_part, &A[i].imag_part);
	}

	/*
	for(i=0; i<5; i++){
		printf("%.0lf %.2lf\n",A[i].real_part, A[i].imag_part);
	}
	*/
	
	for(i=1; i<5; i++){
		if(A[0].imag_part > A[i].imag_part){
			temp = 0; 
		} else{
			temp = i; 
		}
	}

	printf("찾은복소수 = (%.1lf) + (%.1lf) i\n",A[temp].real_part,A[temp].imag_part);

	return 0;
}
