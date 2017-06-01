// Overload cin using friend function
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
	// istream::operator>>
	friend istream& operator >> (istream&, Test&);
	void print(){
		cout << a << endl;
	}
};
// Overload cin >> using friend function
istream& operator >> (istream& in, Test& obj){
	in >> obj.a;
	return in;
}
int main(){
	Test A;
	// Output : 0
	A.print();
	// Overloaded cin for Test Class Object
	cin >> A;
	// Output : input from user
	A.print();
	return 0;
}
