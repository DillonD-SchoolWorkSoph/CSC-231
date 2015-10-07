/*
 * SymbolTable.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: dillon
 */

#include "SymbolTable.h"

void addVarialbe(Varaible v){
	var_table.push_back(v);
}
std::vector<Variable> get(){
	return var_table;
}
void set(std::vector<Varaible> v){
	var_table = v;
	declared = true;
}
bool is_declared(){
	return declared;
}
