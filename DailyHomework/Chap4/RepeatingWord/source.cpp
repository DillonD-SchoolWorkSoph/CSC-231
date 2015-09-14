/*
 * source.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
using namespace std;

int main(){
	string previous = "";
	string current;
	while(cin >> current){
		if(previous == current)
			cout << "repeated word: " << current << "\n";
		previous = current;
	}
}



