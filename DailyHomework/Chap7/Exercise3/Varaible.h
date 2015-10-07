/*
 * Varaible.h
 *
 *  Created on: Oct 7, 2015
 *      Author: dillon
 */

#ifndef VARAIBLE_H_
#define VARAIBLE_H_

#include <string>
class Variable{
	std :: string name;
	bool isConst;
	double value;
public:
	Variable(bool isconst,std :: string name, double value);
	void setValue(double v);
	double getValue();
};

#endif /* VARAIBLE_H_ */
