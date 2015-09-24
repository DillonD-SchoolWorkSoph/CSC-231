/*
 * source.cpp
 *
 *  Created on: Sep 22, 2015
 *      Author: dillon
 */
#include <iostream>
#include <vector>

using namespace std;

//this method tells you if a vector contains and integer
bool contains(vector<int> x, int value);

int main(){
	vector<int> integers(4);

	integers[0] = 0;
	integers[1] = 1;
	integers[2] = 2;
	integers[3] = 3;

	while(true){
		vector<int> testCase;
		for(int i = 0; i < 4 ; i ++){
			cout << "Please input your guess for position:" << i;
			int temp;
			cin >> temp;
			testCase.push_back(temp);
		}
		int bulls = 0;
		int cows = 0;
		for(int i = 0; i < 4; i ++){
			if(testCase[i] == integers[i]){
				bulls++;
			}else if(contains(integers, testCase[i])){
				cows ++;
			}
		}
		cout << "Bulls: " << bulls << " Cows: " << cows;
		cout << "\nIf you want to stop guessing enter 1";
		int exit;
		cin >> exit;
		if(exit == 1)
			break;
	}
}
bool contains(vector<int> x , int value){
	for(int i = 0 ; i < x.size(); i ++){
		if(x[i] == value)
			return true;
	}
	return false;
}


