/*
 * 정수와 제곱근 연산에 대한 테이블
 */
#include <stdio.h>


int squre(int n); //2
int cube(int n); //3
int quartic(int n); //4
int quintic(int n); //5

int main(){


	printf("Table of Power\n");
	printf("=================================================\n");
	printf("Integer\t Square\t Cube\t Quartic\tQuintic\n");
	printf("=================================================\n");
	printf("%5d\t%5d\t%5d\t%7d\t%10d\n",1,squre(1),cube(1),quartic(1),quintic(1)); 
	printf("%5d\t%5d\t%5d\t%7d\t%10d\n",2,squre(2),cube(2),quartic(2),quintic(2)); 
	printf("%5d\t%5d\t%5d\t%7d\t%10d\n",3,squre(3),cube(3),quartic(3),quintic(3));

	return 0;
}
int squre(int n){
	return n*n;
}
int cube(int n){
	return squre(n) * n; 
}
int quartic(int n){
	return squre(n) * squre(n);
}
int quintic(int n){
	return quartic(n) * n;
}

