/*
 * source.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Sentence(vector<string>& st);
bool Conjunction(string w);
bool Noun(string w);
bool Verb(string w);
int main(){
	vector<string> sentence;
	while(true){
		string temp;
		cin >> temp;
		if(temp == ".")
			break;
		sentence.push_back(temp);
	}
	bool c = Sentence(sentence);
	if(c)
		cout << "OK";
	else
		cout << "Not OK";

}
bool Sentence(){
	string left;
	cin >> left;
	if(Noun(left)){
		string right;
		cin >> right;
		//if the last word is a verb and thiers no more input
		if(Verb(right) && !cin)
			return true;
		//if the word is a verb but their is more input to come
		else if(Verb(right) && cin)
			Sentence();
		else
			return false;
	}
	if(Conjunction(left0))
		return Sentence();
	return false;
}
bool Noun(string w){
	if(w == "birds")
		return true;
	if(w == "fish")
		return true;
	if(w == "C++")
		return true;
	return false;
}
bool Verb(string w){
	if(w == "rules")
		return true;
	if(w == "fly")
		return true;
	if(w == "swim")
		return true;
	return false;
}
bool Conjunction(string w){
	if(w == "and")
		return true;
	if(w == "or")
		return true;
	if(w == "but")
		return true;
	return false;
}


