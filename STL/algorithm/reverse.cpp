/* Reverse an array Using reverse function */

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={5,4,1,2,3};

	// Output : 5 4 1 2 3
	for(int i=0;i<5;i++){
		cout << arr[i] << " ";
	}	
	cout << endl;
	
	// Using reverse
	reverse(arr,arr+5);

	// Array After reverse
	// Output : 3 2 1 4 5
	for(int i=0;i<5;i++){
		cout << arr[i] << " ";
	}	
	cout << endl;

return 0;
}
