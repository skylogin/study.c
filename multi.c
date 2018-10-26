/*컴퓨터공학과
 *60082475 정찬호
 *멀티미디어
 *허프만부호화를 이용한 문자열압축
 */
#include <stdio.h>
#include <math.h>

typedef struct huffmanText{
	char name;
	double per;
	int code;
}Text;

int huffmanLength=0;								//압축된 문자열의 길이를 구하는 변수

void inputData(Text array[]);				//주어진 조건데이터를 입력
void sort(Text array[]);						//sorting (per)
void reSort(Text array[]);					//sorting (name)
int dec2bin(int num);								//10->2 진법변환
void huffman(Text array[]);					//변환된 암호화코드를 집어넣음
void huffmanPrint(char str,Text array[]);
double efficient();									//효율계산

int main(){
	Text arr[10];
	char input[51]={"12323537523295893802502049283271958036108506628734"};
	int i;

	inputData(arr);					//데이터값을 집어넣음
	sort(arr);							//sorting
	huffman(arr);						//허프만부호화를 이용하여 암호코드를 넣음


	printf("문자열: ");
	for(i=0; i<10; i++){
		printf("%5c\t",arr[i].name);
	}
	printf("\n빈도수: ");
	for(i=0; i<10; i++){
		printf("%5.2lf\t",arr[i].per);
	}
	printf("\n암호화: ");
	for(i=0; i<10; i++){
		printf("%5d\t",arr[i].code);
	}


	reSort(arr);						//문자열순서대로 재정렬
	printf("\n\n");

	printf("입력문자열: %s\n",input);
	printf("출력문자열: ");
	for(i=0; i<50; i++){
		huffmanPrint(input[i], arr);
	}
	printf("\n");

	double result = efficient();
	printf("압축효율 : %lf\n",result);

	return 0;
}

void inputData(Text array[]){
	array[0].name = '0';    array[0].per = 0.12;
	array[1].name = '1';    array[1].per = 0.06;
	array[2].name = '2';    array[2].per = 0.18;
	array[3].name = '3';    array[3].per = 0.16;
	array[4].name = '4';    array[4].per = 0.04;
	array[5].name = '5';    array[5].per = 0.12;
	array[6].name = '6';    array[6].per = 0.06;
	array[7].name = '7';    array[7].per = 0.06;
	array[8].name = '8';    array[8].per = 0.12;
	array[9].name = '9';    array[9].per = 0.08;
}

void sort(Text array[]){
	int i,j;
	/*버블소트를 이용한 per(빈도)정렬*/
	for(i=9; i>=0; i--){
		for(j=0; j<i; j++){
			if(array[j].per < array[j+1].per){
				Text temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

void reSort(Text array[]){
	int i,j;
	/*버블소트를 이용한 nmae(문자열)정렬*/
	for(i=9; i>=0; i--){
		for(j=0; j<i; j++){
			if(array[j].name > array[j+1].name){
				Text temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int dec2bin(int num){
	int i=0;
	int sum=0;

	while(num != 0){
		int remain = num%2;
		num = num/2;
		sum = sum + remain*pow(10,i);				//10진수를 2진수로 표현
		i++;
	}
	return sum;
}

void huffman(Text array[]){
	int i,j;
	/*dec2bin에서 구해진값을 집어넣음*/
	for(i=0,j=1; i<10; i++,j++){
		array[i].code = dec2bin(j);
	}
}

void huffmanPrint(char str,Text array[]){
	int i;

	for(i=0; i<10; i++){
		if(str == array[i].name){
			printf("%d",array[i].code);				//암호화된 코드 출력

			/*암호화된 문자열에 대한 길이를 세어줌*/
			if(i==0 || i==3){
				huffmanLength += 2;

			} else if(i==1 ||  i==5 || i==8 || i==9){
				huffmanLength += 3;

			} else if(i==2){
				huffmanLength += 1;

			} else if(i==4 || i==6 || i==7){
				huffmanLength += 4;
			}
		}
	}
}
double efficient(){
	double noEfficient = 4 * 50;
	printf("압축코드비트수: %d, 비압축코드비트수 : %.0lf\n",huffmanLength,noEfficient);
	double temp = huffmanLength / noEfficient;
	double result = 1 - temp;

	return result;
}
