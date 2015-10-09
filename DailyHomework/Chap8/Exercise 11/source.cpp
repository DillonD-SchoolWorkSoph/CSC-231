/*
 * source.cpp
 *
 *  Created on: Oct 8, 2015
 *      Author: dillon
 */

#include <vector>

void vectorInfo(std::vector<int> v, int& low, int& high);
std::vector<int> vectorInfo(std::vector<int> v);

int main(){
	std::vector<int> vector = {1,2,10};

}
void vectorInfo(std::vector<int>v, int& low, int& high){
	//find lowest the slwo way
	int h = -2^8;
	int l = 2^8 -1;
	for(int i = 0; i < v.size(); i ++){
		if(v[i] > h)
			h = v[i];
		if(v[i] < l)
			l = v[i];
	}
	low = l;
	high = h;
}
std::vector<int> vectorInfo(std::vector<int> v){
	std::vector<int> re(2);
	//find lowest the slwo way
	int h = -2^8;
	int l = 2^8 -1;
	for(int i = 0; i < v.size(); i ++){
		if(v[i] > h)
			h = v[i];
		if(v[i] < l)
			l = v[i];
	}
	re[0] = l;
	re[1] = h;
}
