/*
 * source.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: dillon
 */

#include <iostream>
#include "utilities.h"
#include "TokenStream.h"
using namespace std;

//this function will create a token from user input
int main() {

	Token_Stream ts;

	try {
		double val = 0.0;
		while (cin) {
			Token t = ts.get();
			if (t.kind == 'q')
				break;
			else if (t.kind == ';')
				cout << "=" << val << "\n";
				//keep_window_open("~~");
			else {
				ts.putback(t);
				val = Expression(ts);
			}
		}
	} catch (exception& e) {
		cout << e.what();
	} catch (...) {
		cout << "something bad happened take cover hide its ww3";
	}

}

