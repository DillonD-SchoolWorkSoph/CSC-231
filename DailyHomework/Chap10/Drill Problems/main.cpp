/*
 * main.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: dillon
 */
#include <iostream>
#include <string>
#include <vector>
#include <ifstream>
#include "point.h"
int main(){
std::cout << "Enter in seven pairs of points";
std::vector<point> original_points;
for(unsigned i = 0; i < 7 ; ++ i){
	int x,y;
	std::cin >> x >> y;
	original_points.push_back(point(x,y));
}
for(point p : original_points){
	std::cout << p.to_string();
}
std::vector<point> processed_points;
std::ifstream ist {"mydata.txt"};
for(point p : original_points){
	p.to_string() >> ist;
}
for(unsigned i = 0; i < 7; ++ i){
	int x,y;
	ist >> x >> y;
	processed_points.push_back(point(x,y));
}
for(point p : processed_points){
	std::cout << p.to_string();
}
}


