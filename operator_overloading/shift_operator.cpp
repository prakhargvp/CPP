#include<iostream>
using namespace std;
class Test{
	int a;
public:
	Test(){
		a = 0;
	}
	Test(int n){
		a = n;
	}
	// left-shift operator
	// left-shift *= 2
	Test operator << (int t){
		a = a << t;	
		return *this;
	}
	// Right-shift Operator
	// right-shift /= 2
	Test operator >> (int t){
		a = a >> t;
		return *this;
	}
	void print(){
		cout << a << endl;
	}
};
int main(){
	Test obj1(1);
	obj1.print();	// 1
	// left shift
	// obj1 = obj1 << number_of_time_to_shift_to_left 
	obj1 << 2;
	obj1.print();	// 4	
	// right shift
	obj1 >> 1;
	obj1.print();	// 2
return 0;
}
