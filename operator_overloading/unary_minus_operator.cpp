// Header Files
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
	// Unary Minus Operator Overload
	Test operator - (){
		a = -a;
		return *this;
	}
	void print(){
		cout << a << endl;
	}
	void setValue(int n){
		a = n;
	}
};
int main(){
	Test obj1(5), obj2;
	obj1.print();		// 5
	obj2.print();		// 0
	// Unary minus operator overload
	obj2 = -obj1;
	obj1.print();		// -5
	obj2.print();		// -5
	obj1.setValue(10);
	obj1.print();		// 10 
	obj2.print();		// -5

return 0;
}
