// Overload cout using friend function
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
	// Declare friend function : To access private members of Test Class
	// To Overload extraction operator >>
	// ostream::operator<<
	friend ostream& operator << (ostream&, Test&);
	void print(){
		cout << a << endl;
	}
};
// Overload cout<< using friend function
ostream& operator << (ostream& out, Test& obj){
	out << obj.a;
	return out;
}
int main(){
	Test A(10);
	// Output : 10
	A.print();
	// Overloaded cout for Test Class Object
	// Output : 10
	cout << A << endl;
	return 0;
}
