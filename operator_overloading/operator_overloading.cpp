// Header Files
#include<iostream>
using namespace std;
// Class
class Complex{
	// Private Member Variables
	int x,y;
	// Public Member Varaibles & Methods
	public:
		// Constructor
		Complex(){
			x = y = 0;
		}
		Complex(int a,int b){
			x = a;
			y = b;
		}
		void print(){
			cout<<"x : "<<x<<" y : "<<y<<endl;
		}
		// Overload Functions
		// unary minus
		Complex operator - (){
			x = -x;
			y = -y;
			// Use return for Obj1 = -Obj2
			return *this;
		}
		// We can Use unary plus implementation same as unary minus
		// Postfix Decrement
		Complex operator -- (int){
			Complex Old(x,y);
			x--;
			y--;	
			// Here we return Old  Value
			return Old;			
		}
		// postfix Increment
		Complex operator ++ (int){
			Complex Old(x,y);
			x++;
			y++;	
			// Here we return Old  Value
			return Old;			
		}
		// Prefix Decrement
		Complex operator -- (){
			x--;
			y--;	
			// Here we return Updated Value
			Complex New(x,y);
			return New;			
		}
		// prefix Increment
		Complex operator ++ (){
			x++;
			y++;	
			// Here we return Updated Value
			Complex New(x,y);
			return New;			
		}

};
// Main Calling Function
int main(){
	Complex C(10,20),D,E,F;

	cout<<"Initial Value Of C & D"<<endl;
	C.print();
	D.print();
	// Unary Operator Overload with return type
	D = -C;
	cout<<"Value of C & D After Unary Minus C and assign to D"<<endl;
	C.print();
	D.print();
	// Increment and Decrement	
	// Intital Value of E
	cout<<"Initial Value Of E & F"<<endl;
	E.print();
	F.print();
	// Post-Increment
	F = E++;
	cout<<"Value of E & F After Post-Increment E and assign to F"<<endl;
	E.print();
	F.print();
	// Post-Decrement
	F = E--;
	cout<<"Value of E & F After Post-Decrement and assign to F"<<endl;
	E.print();
	F.print();
	// Pre-Increment
	F = ++E;
	cout<<"Value of E & F After Pre-Increment E and assign to F"<<endl;
	E.print();
	F.print();
	// Pre-Decrement
	F = --E;
	cout<<"Value of E & F After Pre-Decrement and assign to F"<<endl;
	E.print();
	F.print();

return 0;
}
