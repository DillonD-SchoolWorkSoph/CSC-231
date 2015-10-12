/*
 * source.cpp
 *
 *  Created on: Oct 11, 2015
 *      Author: dillon
 */
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Name_Pairs{
public:
	vector<string> name;
	vector<double> age;
	void read_names();
	void read_ages();
	void print();
	void sort();

};
void Name_Pairs::read_ages(){
	while(cin){
		double a;
		cin >> a;
		age.push_back(a);
	}
}
void Name_Pairs::read_names(){
	while(cin){
		string n;
		cin >> n;
		name.push_back(n);
	}
}
void Name_Pairs::print(){
	for(int i = 0; i < name.size && i < age.size(); i ++){
		cout << name[i] << age[i];
	}
}
void Name_Pairs::sort(){

}
int main(){

}
