/*
 * source.cpp
 *
 *  Created on: Sep 20, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> parse(string expression);
double add(string expression);
double doMath(vector<string> expression);
int main(){
	string expression = "";
	cin >> expression;
	vector<string> stuff = parse(expression);
	for(int i = 0 ; i < stuff.size(); i ++)
		cout << stuff[i] << '\n';

}
double add(string expression){
	string s;
	double var1;
	char sym = expression[1];
	int var2 = expression[2];
	switch(sym){
	case '+':
		return var1 + var2;
	case '-':
		return var1 - var2;
	case '/':
		return var1 / var2;
	case '*':
		return var1 * var2;
	}
	return 0;

}
double doMath(vector<string> expressions){
	double output = std::stod(expressions[0]);
	int x = 2;
	for(int i = 1 ; i < expressions.size(); i +=2){
		char sym = expressions[i][0];
		double var1 = output;
		double var2 = std::stod(eexpresion[x]);
		switch(sym){
		case '+':
			output = var1 + var2;
			break;
		case '-':
			output = var1 - var2;
			break;
		case '/':
			output = var1 / var2;
			break;
		case '*':
			output = var1 * var2;
			break;
		}
		x += 2;
	}
	return output;
}
/**
 * Returns a vector with each element being a token
 */
vector<string> parse(string expression){
	int output;
	vector<string> components;
	//read threw each charecter and parse values from until you reach an expresiion value, this handles the conversion of integer
	//values
	int x = 0;//this counter is for the vector
	bool add = false;
	for(int i = 0; i < expression.length(); i ++){
		//assumes first charecter will be a vavlue
		char temp = expression[i];
		switch(temp){
			case '*':
				components.push_back(string(1,temp));
				x+=2;
				add = false;
				break;
			case '+':
				components.push_back(string(1,temp));
				x+=2;
				add = false;
				break;
			case '/':
				components.push_back(string(1,temp));
				x+=2;
				add = false;
				break;
			case '-':
				components.push_back(string(1,temp));
				x+=2;
				add = false;
				break;
			default:
				if(add){
					components.at(x) += temp;
				}else{
					components.push_back(string(1,temp));
					add = true;
				}
				break;
		}
	}

	return components;
}




