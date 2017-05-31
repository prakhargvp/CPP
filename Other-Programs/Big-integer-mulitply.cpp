/*
 * Multiply two strings of infinite length as number 
 * in C++ using Iterator or without using indexing 
*/
#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){

	string n1, n2, res;
	
	// string Iterator
	string::iterator it1,it2, itr, itrt;
	int rem, mul, carry, a, b;
	
	// Input Number
	cin >> n1 >> n2;
		
	// it2 iterator pointing at the end of string n2
	it2 = n2.end() - 1;
	// pre determine the size of result in multiplication
	// because resize in mid of program might invalidate all iterators 
	// pointing into the vector.
	res.resize( n1.size() + n2.size() + 1 ,'0');
	// point itr iterator at the beginning of result
	itr = res.begin();
	// loop untill the begining of second string from end	
	while(it2!=n2.begin()-1){
		// it1 iterator pointing at the end of string n1
        	it1 = n1.end() - 1;	
		carry = 0;
		// itrt is local iterator pointing at itr
		// its use for shifting the res, for adddition
		itrt = itr;
		// loop untill begining of string n1
		while(it1!=n1.begin()-1){	
			a = (*it1 - '0');
			b = (*it2 - '0');
			mul = a * b + carry;
			// Apply Adddition Logic
			if(it2!=n2.end()-1){
				mul += (*itrt - '0');
			}

			rem = mul%10;
			carry = mul/10;
			(*itrt) = rem + '0'; 	
		--it1;
		// shifting of result, res
		++itrt;
		}
		// If carry is generated then add with number
		while(carry>0){
			a = *itrt - '0' + carry;
			(*itrt) = a + '0';	
			carry = a/10;
		++itrt;
		}
		// increment the result, res
		itr++;
	--it2;	
	}
	reverse(res.begin(),res.end());
	// here you can add remove preceding zero logic 
	// for the resultant string
	cout << res << endl;
return 0;
}
