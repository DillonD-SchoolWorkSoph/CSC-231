/*
 * source.cpp
 *
 *  Created on: Sep 9, 2015
 *      Author: dwd002
 *     Purpose: This file is for exercise 6 in chapter 3 i think
 */
#include <iostream>

using namespace std;

int main() {
	cout << "Enter in three integer values seperated by a space";

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	for (int i = 0; i < 2; i++) {
		if (a > b) {
			int temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			int temp = c;
			c = b;
			b = temp;
		}
	}
	cout << a;
	cout << b;
	cout << c;
}

