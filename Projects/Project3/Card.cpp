/*
 * Card.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: dillon
 */

#include "Card.h"

Card::Card(int r, char s) {
	// TODO Auto-generated constructor stub
	info = new RankSuit{s, r};
}
std::string Card::string_representation(){
	std::string suit;
	switch(info.suit){
	case 'S':
		suit = "spades";
	case 'H':
		suit = "hearts";
	case 'C':
		suit = "clubs";
	case 'D':
		suit = "diamonds";
	}
	std::string rep = "" + info.rank + " of " + suit;

	return rep;
}
Card::~Card() {
	// TODO Auto-generated destructor stub
}

