/*
 * source.cpp
 *
 *  Created on: Sep 10, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> words;
	string exclude1 = "poop";
	string exclude2 = "supperpoop";

	while(true){
		cout << "enter a word or a 1 to exit";
		string temp;
		cin >> temp;
		if(temp == "1")
			break;
		words.push_back(temp);
	}

	for(int i = 0 ; i < words.size(); i ++){
		if(words[i] == exclude1 || words[i] == exclude2)
			cout << "BLEEEP";
		else
			cout << words[i];
	}
}



