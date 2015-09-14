/*
 * source.cpp
 *
 *  Created on: Sep 13, 2015
 *      Author: dillon
 */
#include <iostream>

using namespace std;
double ctok(double c);
//the erro  here was you were tring to put the stream into d which did not exist, and instead of sending
//ctok "c" you were sending a string instead of the variable c
int main(){
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';
}
//The error is that you were return int, intstead of the variable k, you also lose precision
//by using an integer instead of a double but it will work
double ctok(double c){
	int k = c + 273.15;
	return k;
}


