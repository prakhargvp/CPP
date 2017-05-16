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
	// Prefix increment operator
	Test operator ++ (){
		a++;
		Test obj(a);	
		return obj;
	}
	// Postfix increment operator
	Test operator ++ (int){
		Test obj(a);	
		a++;
		return obj;
	}
	void print(){
		cout << a << endl;
	}
};
int main(){
	Test obj1,obj2;
	obj1.print();	// 0
	obj2.print();	// 0
	// Prefix increment
	obj2 = ++obj1;	 
	obj1.print();	// 1
	obj2.print();	// 1
	// Postfix increment
	obj2 = obj1++;	 
	obj1.print();	// 2
	obj2.print();	// 1

return 0;
}
