// Header Files
#include<iostream>
using namespace std;
class Test{
	int a;
	public:
	// Default Constructor
	Test(){
		a = 0;
	}
	// Parameterized Constructor
	Test(int n){
		a =  n;		
	}
	// Unary Plus Operator
	// Returning an object invokes the copy constructor while returning a reference doesn't. 
	Test operator + (){
		return *this;	
	}
	void print(){
		cout << a <<endl;
	}
	void setValue(int n){
		a = n;
	}

};
int main(){
	Test obj1(5), obj2;
	// Print the value of obj1
	// 5
	obj1.print(); 
	// Print the value of obj2
	// 0
	obj2.print();
	// Unary plus Operator overload
	// Return the object
	obj2 = +obj1;
	// 5
	obj1.print();
	// 5
	obj1.print();
	// Change the obj1 value
	obj1.setValue(10);
	// 10
	obj1.print();
	// 5
	obj2.print();
return 0;
}
