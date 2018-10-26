#include <iostream>
using namespace std;

class Student{

	public:
		string name;
		int kor;
		int eng;
		int math;
		Student* Next;

		Student(){
			name = "NONE";
			kor = 0;
			eng = 0;
			math = 0;
		}
		Student(string t_name, int t_kor, int t_eng, int t_math){
			name = t_name;
			kor = t_kor;
			eng = t_eng;
			math = t_math;
		}
		void Show(){
			cout<<"이름\t국어\t영어\t수학\n";
			cout<<name<<"\t"<<kor<<"\t"<<eng<<"\t"<<math<<endl;
		}
		void printList(Student* root){
			for(;root!=NULL; root=root->Next){
				root->Show();
			}
		}
};

void main(){
	Student A("Kim",95,95,90);
	Student B("Park",95,95,90);
	Student C("Lee",95,95,90);
	Student *root=NULL;

	root = &A;
	A.Next = &B;
	B.Next = &C;

	printList(root);

}
