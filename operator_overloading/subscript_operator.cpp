#include<iostream>
using namespace std;
#define MAX 10
class Test{
	int A[MAX];
public:
	Test(){
		// Initailise Array index values with 0
		for(int i=0;i<MAX;i++){
			A[i] = 0;
		}
	}
	// Subscript Operator Overload
	int &operator [] (int i){
		// If array index is less than size then return array index value
		if(i<MAX){
			return A[i];
		}else{
			return A[0];
		}
	}
};
int main(){
	Test obj1;
	cout << obj1[0] << endl;
	obj1[0] = 5;
	cout << obj1[0] << endl;
return 0;
}
