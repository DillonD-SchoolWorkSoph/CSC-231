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

struct NameAge{
	std::string name;
	int age;

	NameAge(string n, int a);
};
class Name_Pairs{
public:
	vector<NameAge> stuff;
	void read_names();
	void read_ages();
	void print();
	void sort();

};
void Name_Pairs::read_ages(){
	while(cin){
		double a;
		string na;
		cin >> a >> na;
		stuff.push_back((new NameAge{na, a}));
	}
}
void Name_Pairs::print(){
	for(int i = 0; i < stuff.size(); i ++){
		cout << stuff[i].name << stuff[i].age;
	}
}
void Name_Pairs::sort(){

}
int main(){

}
