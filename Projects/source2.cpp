/*
 * source2.cpp
 *
 *  Created on: Sep 9, 2015
 *      Author: dwd002
 *      Purpose: This is exercise 7 of the homework
 *
 *
 */
#include <iostream>
#include <string>
using namespace std;
int whichOnesSmaller(string a, string b);

int main(){
	string a;
	string b;
	string c;
	cout << "enter in three words to be sorted";

	cin >> a >> b >> c;
	for(int i = 0 ; i < 2; i ++){
		if(whichOnesSmaller(a, b) == 1){
			string temp = a;
			a = b;
			b = temp;
		}
		if(whichOnesSmaller(b, c) == 1){
			string temp = b;
			b = c;
			c = temp;
		}
	}
	cout << a << b << c;

}
//returns 0 if first one is smaller 1 if the second one is smaller
int whichOnesSmaller(string a, string b){
	for(int i = 0 ; i < a.length() && i < b.length(); i ++){
		if(a.at(i) > b.at(i))
			return 1;
	}
	return 0;
}



