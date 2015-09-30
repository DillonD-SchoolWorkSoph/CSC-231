/*
 * source.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: dillon
 */

#include <iostream>

using namespace std;
class Token {
public:
	char kind;
	double value;
};
class Token_stream {
public:
	Token get();
	void putback(Token t);
private:
	bool full { false };
	Token buffer;
};
Token get_token();
double Expresion();
double Term();
double Primary();
double Secondary;
double Number();
double
//this function will create a token from user input
int main() {
	while (cin) {

	}
}
double Expression() {
	double left = Term();
	Token t = get_token();
	while (true) {
		case '+':

		break;
		case '-':

		break;
		default:
		return left;
	}
}
double Term() {
	double left = Primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '*':
			left *= Primary();
			t = get_token();
			break;
		case '/': {
			double d = Primary();
			if (d == 0)
				cerr << "divide by zero";
			left /= d;
			t = get_token();
			break;
		}
		default:
			return left;
		}
	}
}
double Primary(){
	Token t = get_token();
	switch(t.kind){
	case '(':{
		double d = Expression();
		t = get_token();
		if (t.kind != ')') cerr << " ')' expected you twit";
		return d;
	}
	case '8':
		return t.value;
	default:
		cerr << "primary expected";
	}
}
double Secondary(){
}
void Token_stream::putback(Token t) {
	if (full)
		cerr << "Putback() into a full buffer";
	buffer = t;
	full = true;
}
Token Token_stream::get() {
	if (full) {
		full = false;
		return buffer;
	}
	char ch;
	cin >> ch;
	switch (ch) {
	case ';': //print
		break;
	case 'q':
		break; //quit
	case '(':
	case ')':
	case:'+':case'-':case'*':case'/':
	return Token {ch};
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9': {
		cin.putback(ch);
		double val;
		cin >> val;
		return Token { '8', val };
	}
	default:
		cerr << "bad juuu juu";

	}
}

