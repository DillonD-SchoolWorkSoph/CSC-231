/*
 * source.cpp
 *
 *  Created on: Sep 13, 2015
 *      Author: dillon
 */

#include <iostream>
using namespace std;
double ctok(double c);
int main(){
	double c = 0;
	cin >> c;
	if(c < -273.15)
		cout<< "that is not a real temperature";
	else
		cout << ctok(c);
}
double ctok(double c){
	//place the check here
	//if(c < 273.13{
	//cout <<"error";
	//else
	//return c + 273.13;
	return c + 273.15;
}
