/* Single line input & Output in a file*/
#include<iostream>
// header file for ifstream, ofstream, fstream class
#include<fstream>
using namespace std;
int main(){
	string str;
	// ofstream class object
	ofstream fout;
	fout.open("read.txt");	

	cout << "Enter a Line : " << endl;
	getline(cin,str);
	// to write in file
	fout << str;
	fout << endl;
	fout.close();

	cout << "Output from File : " <<endl;
	// ifstream class object
	ifstream fin;
	// to read from file
	fin.open("read.txt");	
	getline(fin,str);
	cout << str ;
	fin.close();

return 0;
}
