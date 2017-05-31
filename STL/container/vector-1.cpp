// By using vector implement int array
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr;

	// TO insert a number
	// 10
	arr.push_back(10);
	// 10 1
	arr.push_back(1);
	// 10 1 2
	arr.push_back(2);

	// To print particular index value
	cout << arr[0] << endl;	// 10

	// To print all numbers from beginin to end
	// Using size : to find size of vector array
	// Output : 10 1 2
	for(int i=0; i<arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;

	// To print all numbers using iterator
	// Output : 10 1 2
	vector<int>::iterator it = arr.begin();
	while(it!=arr.end()){
		cout << *it << " ";
	it++;
	}
	cout << endl;

	// To pop a value from end 
	arr.pop_back();
	// Remaining arr : 10 1

	// To clear vector
	// output : 
	if(!arr.empty())
		arr.clear();
return 0;
}
