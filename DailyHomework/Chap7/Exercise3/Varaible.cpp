/*
 * Varaible.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: dillon
 */

#include "Varaible.h"

Varaible:: Variable(bool isconst, string name, double value){
		this.isConst = isconst;
		this.name  = name;
		this.value = value;

	}
void Varaible::setValue(double v){
		if(!isConst)
			value = v;
		else
			//throw trying to set constant error
	}
double Varaible:: getValue(){
		return value;
	}
