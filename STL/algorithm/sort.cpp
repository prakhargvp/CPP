/* Sorting an array Using sort function */

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

	// To apply sort function in STL
	// sort in ascending order
	sort(arr,arr+5);
	
	// Output : 1 2 3 4 5 
	for(int i=0;i<5;i++){
		cout << arr[i] << " ";
	}	
	cout << endl;

	// sort in descending order using STL
	// greater is a template class return true 
	//  if first argument is greater than second
	sort(arr,arr+5,greater<int>());

	// Output : 5 4 3 2 1 
	for(int i=0;i<5;i++){
		cout << arr[i] << " ";
	}	
	cout << endl;

return 0;
}
