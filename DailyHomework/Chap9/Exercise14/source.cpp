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
	struct NameAge{
		std::string name;
		int age;

		NameAge(string n, int a);
	};
public:
	vector<NameAge> stuff;
	void read_names();
	void read_ages();
	void print();
	void sort();

	bool operator<(const NameAge& lhs, const NameAge& rhs){
		if(lhs == rhs)
			return true;
		return false;
	}
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
	for(int i = 0 ; i < stuff.size(); i ++){
		for(int y = 1 ; y <= i; y ++){
			if(stuff[y] > stuff[y-1]){
				int temp = stuff[y];
				stuff[y] = stuff[y-1];
				stuff[y-1] = temp;
			}
		}
	}
}
int main(){

}
