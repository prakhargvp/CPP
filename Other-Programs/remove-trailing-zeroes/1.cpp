// To remove trailing/preceding zeroes from the string

#include<iostream>
using namespace std;

string removeZero(string str){
	int i = 0;
	while(str[i]=='0'){
		i++;
	}
	str.erase(str.begin(),str.begin()+i);
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
