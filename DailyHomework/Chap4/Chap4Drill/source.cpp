/*
 * source.cpp
 *
 *  Created on: Sep 8, 2015
 *      Author: dillon
 */
#include <iostream>
using namespace std;

int main(){

	int x,y;
	while(true){
		cout << "enter in two integers with a space inbetween or | to quit";
		cin >> x;
		cin >> y;
		if(x == '|' or y == '|')
			break;
		cout << "The smaller number is: ";
		if(x < y)
			cout << x;
		else if (x > y)
			cout << y;
		else
			cout << "the numbers are equal";
		cout << "\n";
		cout << "The larger number is: ";
		if(x < y)
			cout << y;
		else if ( x > y )
			cout << x;
		else
			cout << "then numbers are equal";
		cout << "\n";
	}
}



