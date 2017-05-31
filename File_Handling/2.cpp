/* Multi line input & Output in a file*/
#include<iostream>
// header file for ifstream, ofstream, fstream class
#include<fstream>
using namespace std;
int main(){
	string str;
	// ofstream class object
	ofstream fout;
	fout.open("read.txt");	
	cout <<  "Enter (-1) to exit : " << endl;
	do{
		getline(cin,str);
		// to write in file
		if(str!="-1"){
			fout << str;
			fout << endl;
		}
	}while(str!="-1");
	fout.close();
	//
	// ifstream class object
	ifstream fin;
	// to read from file
	fin.open("read.txt");	
	while(getline(fin,str)){
		cout << str << endl;
	}
	fin.close();

return 0;
}
