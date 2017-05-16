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
	// prefix decrement
	Test operator -- (){
		a--;
		Test obj(a);
		return obj;
	}	
	// postfix decrement
	Test operator -- (int){
		Test obj(a);
		a--;
		return obj;
	}
	void print(){
		cout << a << endl;
	}
};
int main(){
	Test obj1(10),obj2;
	obj1.print();	// 10
	obj2.print();	// 0
	// Prefix Decrement
	obj2 = --obj1;
	obj1.print();	// 9
	obj2.print();	// 9
	// Postfix Decrement
	obj2 = obj1--;
	obj1.print();	// 8
	obj2.print();	// 9

return 0;
}
