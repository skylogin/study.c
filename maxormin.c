#include <stdio.h>
void max(int n[]);
void min(int n[]);

int main(){
	int arr[10] = {10, 4, 2, 5, 1, 3, 9, 6, 8, 7};

	max(arr);
	min(arr);

	return 0;
}

void max(int n[]){
	int i,j;
	int answer = n[0];

	for(i=1; i<10; i++){
		if(answer > n[i]){
			continue;
		} else{
			answer = n[i];
		}
	}

	printf("Max = %d\n",answer);
}

void min(int n[]){
	int i,j;
	int answer=n[0];

	for(i=1; i<10; i++){
		if(answer < n[i]){
			continue;
		} else{
			answer = n[i];
		}
	}

	printf("Min = %d\n",answer);
}
