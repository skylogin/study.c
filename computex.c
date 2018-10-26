#include <stdio.h>
int compute_to_x(int n);

int main(){
	int x,n;

	printf("x값을 입력하시오: ");
	scanf("%d", &x);

	n = compute_to_x(x);
	printf("%d\n",n);
}

int compute_to_x(int n){
	return n*n*n*n + n*n + 1;
}
