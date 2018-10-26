#include <iostream>
using namespace std;
class Bird{
	private:
		int m_weight;
		string name;
		
	public:
		void set_name(string str){
			name = str;
		}
		void set_weight(int weight){
			m_weight = weight;
		}
		string get_name(){
			return name;
		}
		int can_fly(){
			if(m_weight <10){
				return 1;
			} else{
				return 0;
			}
		}
};
int main(){
	Bird tweety;
	double weight;
	
	tweety.set_name("Tweety");
	cin >> weight;
	tweety.set_weight(weight);

	if(tweety.can_fly())
		cout << tweety.get_name() << " can fly." <<endl;
	else
		cout << tweety.get_name() << " cannot fly." <<endl;


	return 0;
}
