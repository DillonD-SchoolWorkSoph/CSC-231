/*
 * soure.cpp
 *
 *  Created on: Oct 5, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Variable{
	string name;
	bool isConst;
	double value;
public:
	Variable(bool isconst, string name, double value);
	void setValue(double v);
	double getValue();
};
Variable(bool isconst, string name, double value){
		this.isConst = isconst;
		this.name  = name;
		this.value = value;

	}
void Variable::setValue(double v){
		if(!isConst)
			value = v;
		else
			//throw trying to set constant error
	}
double Variable:: getValue(){
		return value;
	}
class SymbolTable{
	vector<Variable> var_table;

public:
	void addVariable(Variable v);

};

int main(){

}



