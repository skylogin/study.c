#include <iostream>
#define MAXSTACK 1000
using namespace std;
class Stack{
	private:
		int sp;
		int stack[MAXSTACK];
	public:
		int top(){
				return stack[sp-1];
		}
		void init(){
			sp = 0;
		}
		void push(int x){
			stack[sp++] = x;
		}
		int pop(){
			if(!is_empty())
				return stack[sp--];	
		}
		void print(){
			while(!is_empty()){
				printf("%d --> ",top());
				pop();
			}
			printf("END\n");
		}
		int is_empty(){
			return sp ==0;	
		}
};

int main(){
	Stack stk;

	stk.init();
	stk.push(1); stk.push(2); stk.push(3);

	stk.print();

	return 0;
}
