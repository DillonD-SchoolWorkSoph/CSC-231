/*
 * VectorFunctions.cpp
 *
 *  Created on: Sep 14, 2015
 *      Author: dillon
 */

#include "VectorFunctions.h";


int range_avg(vector<int> vec, int low, int high){
	int running_avg = 0;
	if(low < 0 || low > vec.size() || low > high)
		system_error("Lower bound is outside the range of the vector");
	if(high < 0 || high < low || high > vec.size())
		system_error("Upper bound is outside the range of the vector");
	for(int i = low; i < high; i ++)
		running_avg += vec[i];

	return running_avg / (high - low);
}


