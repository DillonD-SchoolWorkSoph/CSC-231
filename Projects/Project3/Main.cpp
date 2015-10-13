/*
 * Main.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: dillon
 */

#include "Hand.h"
#include "Card.h"
#include <iostream>
#include <fstream>
int main(){
	std::ifstream myfile;
	std::cout << "Enter in the file location: ";
	std:: string file_location;
	std::cin >> file_location;
	myfile.open (file_location);
	if(myfile.is_open()){
		std::string line = "";
		while(std::getline(myfile,line)){
			Hand h{};
			for (unsigned i = 0; i < line.size(); i +=3){
				int rank = line.at(i);
				char suit = line.at(i + 2);
				Card c = new Card(rank, suit);
				h.add_card(c);
			}
			std::cout << h.evaluate();
		}
	}

}



