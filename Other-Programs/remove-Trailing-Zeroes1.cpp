/*
 * To remove trailing/preceding zeroes from the string
 * Using Iterator
*/

#include<iostream>
using namespace std;

string removeZero(string str){

	string::iterator itr = str.begin();

	while(itr!=str.end()){
		if(*itr=='0'){
			// Using erase function
			str.erase(itr,itr+1);
		}else{
			break;
		}
	}
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
