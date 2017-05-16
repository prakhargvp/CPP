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
	// Binary minus operator overload 
	// We can use Test class object as reference in argument
	//Test operator - (Test & obj2)
	//Test operator - (const Test & obj2)
	Test operator - (Test obj2){
		Test obj3;
		obj3.a = a - obj2.a;
		return obj3;
	}
	void print(){
		cout << a << endl;
	}
};
int main(){
	// There is no link between class identifiers and main
	Test obj1(10),obj2(2),obj3;
	obj1.print();	// 10
	obj2.print();	// 2
	obj3.print();	// 0
	// Binary minus operator overload
	obj3 = obj1 - obj2;
	obj1.print();	// 10
	obj2.print();	// 2
	obj3.print();	// 8 

return 0;
}
