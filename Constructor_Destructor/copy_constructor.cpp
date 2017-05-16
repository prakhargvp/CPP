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
		a = n;
	}
	// Copy Constructor
	// Copy Constructor accept its parameter by reference
	// Because if it's not by reference, it's by value. 
	// To do that you make a copy, and to do that you call the copy constructor. 
	// But to do that, we need to make a new value, so we call the copy constructor, and so on
	Test(Test & obj){
		a = obj.a;	
	}
	void print(){
		cout << a << endl;
	}
};
int main(){
	Test A,B(10);
	A.print();	// 0
	B.print();	// 10
	// Copy Constructor
	A = Test(B);
	A.print();	// 10
	B.print();	// 10
return 0;
}
