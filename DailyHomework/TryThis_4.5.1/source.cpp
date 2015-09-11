/*
 * source.cpp
 *
 *  Created on: Sep 10, 2015
 *      Author: dillon
 */
#include <iostream>
using namespace std;
int square(int num);
int main(){

}
int square(int num){
	int output = num;
	for(int i = 0; i < num; i ++){
		output += num;
	}
	return output;
}



