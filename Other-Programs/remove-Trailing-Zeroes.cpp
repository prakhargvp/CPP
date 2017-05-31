#include<iostream>
using namespace std;

// To remove trailing/preceding zeroes from the string
string removeZero(string str){
	int i = 0;
	while(i<str.size()){
		if(str[0]=='0'){
			// Using erase function
			str.erase(str.begin()+i,str.begin()+i+1);
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
