/*
 * source3.cpp
 *
 *  Created on: Sep 9, 2015
 *      Author: dillon'
 *      Exercise 10
 *
 */
#include <iostream>
using namespace std;

int main() {

//using a char no point ot use a string...just saying
	char opperand;
	cout << "Enter in an operand (+,-,*,/) follweded by a apce then two numbers\nseperated by a space";
	double num1;
	double num2;
	cin >> opperand >> num1 >> num2;
	double output;
	switch (opperand) {
	case '*':
		output = num1 * num2;
		break;
	case '/':
		output = num1 / num2;
		break;
	case '+':
		output = num1 + num2;
		break;
	case '-':
		output = num1 - num2;
		break;
	default:
		return 0;
		break;
	}
	cout << output;
}

