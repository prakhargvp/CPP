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
		// Binary Addition
		Complex operator + (Complex &C1){
			Complex C;
			C.x = x + C1.x;
			C.y = y + C1.y;
			return C;
		}
		// Binary Subtration
		Complex operator - (Complex &C1){
			Complex C;
			C.x = x - C1.x;
			C.y = y - C1.y;
			return C;
		}
		// left Shift 
		Complex operator << (int n){
			x = x<<n;
			y = y<<n;
			return *this;
		}
		// Right Shift 
		Complex operator >> (int n){
			x = x >> n;
			y = y >> n;
			return *this;
		}

};
// Main Calling Function
int main(){
	Complex C(10,20),D(1,3),E,F,G(1,1);

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
	// Binary Addition
	cout<<"Add D & E and assign to F"<<endl;		
	F = D + E;
	D.print();
	E.print();
	F.print();
	// Binary Subtraction 
	cout<<"Subtract D & E and assign to F"<<endl;		
	F = D - E;
	D.print();
	E.print();
	F.print();
	// Left Shift
	cout<<"Left Shift D"<<endl;	
	G << 2;
	G.print();
	// Right Shift
	cout<<"Right Shift D"<<endl;	
	G >> 1;
	G.print();

return 0;
}
