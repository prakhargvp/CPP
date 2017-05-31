/*
 * To remove trailing/preceding zeroes from the string
 * Using Iterator
*/

#include<iostream>
using namespace std;

string removeZero(string str){

	string::iterator itr = str.begin();

	while(*itr=='0'){
		itr++;
	}

	str.erase(str.begin(),itr);
	return str;
}

int main(){
	string str;
	str = "00000123569";
	str = removeZero(str);
	// 123569
	cout << str << endl;
return 0;
}
