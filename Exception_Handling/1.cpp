#include<iostream>
using namespace std;
int main(){
	
	// Variable Declaration
	int num1, num2;
	float res;	

	// Read Two numbers from User
	cin >> num1 >> num2;
	try{
		// If num2 is zero then throw an error
		// After throwing an error it will go to catch block
		if(num2==0)
			throw 0;	
		
		// Division of Two number may be in float
		res = (float)num1/num2;
		// Output the result
		cout << res << endl;

	}
	// catch(...) : is used to handle any type of throw
	catch(int e){
		cout << "Division by 0 error" << endl;	
	}

return 0;
}
