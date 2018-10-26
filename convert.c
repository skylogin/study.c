#include <stdio.h>
int main(){
	char arr[100];
	int i=0;
	
	gets(arr);
	while(arr[i] != '\0'){
		switch(arr[i]){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case ',':
			case '\n':
				i++;
				break;
			default:
				if('a'<arr[i] && arr[i]<'z'){
					arr[i] = arr[i] + ('A'-'a');
					i++;
				} else if ('A'<arr[i] && arr[i]<'Z'){
					arr[i] = arr[i] -('A'-'a');
					i++;
				} else{
					i++;
				}
		}
	}

	printf("%s\n",arr);
}	
