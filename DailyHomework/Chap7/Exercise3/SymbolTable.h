/*
 * SymbolTable.h
 *
 *  Created on: Oct 7, 2015
 *      Author: dillon
 */

#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_

#include <vector>
#include "Varaible.h"
#include <string>

class SymbolTable{
	std::vector<Variable> var_table;
	bool declared = false;
public:
	void addVariable(Variable v);
	std::vector<Variable> get();
	void set(std::vector<Variable> v);
	bool is_declared();
	void declare();

};

#endif /* SYMBOLTABLE_H_ */
