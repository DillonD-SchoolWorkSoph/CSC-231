/*
 * main.cpp
 *
 *  Created on: Sep 14, 2015
 *      Author: dillon
 */
#include <iostream>
#include <vector>
#include "VectorFunctions.h"
using namespace std;

int main(){
	vector<int> data;
	cout << "Enter integers into the vector, enter .1 to exit\n";
	while(true){
		float input;
		cin >> input;
		if(input == 0.1f){
			break;
		}
		data.push_back(input);
	}
	cout << "\nEnter a lower bound\n";
	int low_bound = 0;
	cin >> low_bound;
	cout << "Enter an upper bound\n";
	int upper_bound = 0;
	cin >> upper_bound;
	cout << "The average of the values in that range are: " << range_avg(data, low_bound, upper_bound);
}




