/*
 * source.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: dillon
 */

#include <iostream>
using namespace std;

int main(){
	cout << "Please enter your first name and age\n";
	string firstName = "???";

	float age = -1;
	cin >> firstName >> age;
	age *= 12;
	cout << "Hello," << firstName << " your age in months: "<<age<<"\n";
}

