/*
 * source.cpp
 *
 *  Created on: Sep 8, 2015
 *      Author: dillon
 */
#include <iostream>

using namespace std;

int main(){
	int i = 1;
	constexpr float yenRate = 1.0;
	constexpr float euroRate = 1.0;
	constexpr float poundRate = 1.0;

	double currency = 0.0;
	while(true){
		cout << "enter a number to be converted xx.xx or 0 to quit";
		cin >> currency;
		i = currency;
		if(i == 0){
			break;
		}
		cout << "enter 0 if you entered a euro \n enter 1 if you entered a yen \n enter a 2 if you entered a pound";
		int currencyType;
		cin >> currencyType;
		switch (currencyType){
		case 0:
			currency = currency * euroRate;
			break;
		case 1:
			currency = currency * yenRate;
			break;
		case 2:
			currency = currency * poundRate;
			break;
		default:
			cout << "you etered a crappy value you suck";
			break;
		}


	}

}



