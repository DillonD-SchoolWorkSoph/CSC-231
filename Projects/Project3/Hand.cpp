/*
 * Hand.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: dillon
 */

#include "Hand.h"

Hand::Hand() {
	// TODO Auto-generated constructor stub

}

Hand::~Hand() {
	// TODO Auto-generated destructor stub
}

void Hand::add_card(Card& c) {
	if (c.info.rank >= 1 && c.info.rank <= 13) {
		if (c.info.suit == 'S' && c.info.suit == 'H' && c.info.suit == 'C'
				&& c.info.suit == 'D') {
			hand.push_back(c);
			return;
		}
	}
	std::cerr << "The data in the text file, tried to add a unreal card";
}
std::string Hand::cards_in_hand() {
	std::string out = "";
	for (Card& c : hand) {
		out += c.string_representation();
	}
	return out;
}
//sorts hand from smalled to largest
void Hand::sort_rank() {
	for (unsigned i = 0; i < hand.size() - 1; i++) {
		for (int j = 1; j <= i; j++) {
			if (hand[j - 1].info.rank > hand[j].info.rank) {
				Card t = hand[j - 1];
				hand[j - 1] = hand[j];
				hand[j] = t;
			}
		}
	}
}
//groups the suits in a hand
void Hand::sort_suit(){
	for (unsigned i = 0; i < hand.size() - 1; i++) {
		for (int j = 1; j <= i; j++) {
			if (hand[j - 1].info.suit > hand[j].info.suit) {
				Card t = hand[j - 1];
				hand[j - 1] = hand[j];
				hand[j] = t;
			}
		}
	}
}
std::string Hand::evaluate() {

}

bool Hand::is_straight() {
	sort_rank();
	unsigned x = 0;
	for (unsigned i = 0; i < hand.size() - 1; i++) {
		if (hand[i].info.rank + 1 == hand[i + 1].info.rank) {
			x++;
		}
	}
	if (x == 5)
		return true;
	else
		return false;
}
bool Hand::two_of_kind() {
	for (unsigned i = 0; i < hand.size - 1; i++) {
		if (hand[i].info.rank == hand[i + 1].info.rank
				&& hand[i].info.suit == hand[i + 1].info.suit)
			return true;
	}
	return false;
}
bool Hand::two_pair() {
	std::vector<Card> temp = hand;
	unsigned num_pairs = 0;
	for (unsigned x = 0; x < 2; x++) {
		for (unsigned i = 0; i < temp.size - 1; i++) {
			if (temp[i].info.rank == temp[i + 1].info.rank
					&& temp[i].info.suit == temp[i + 1].info.suit){
				num_pairs ++;
				temp.erase(temp.begin() + i);
				temp.erase(temp.begin() + i + 1);
			}

		}
	}
	if(num_pairs == 2)
		return true;
	return false;
}
bool Hand::three_of_kind() {
	sort_rank();
	unsigned num_kind = 0;
	unsigned num_suit = 0;
	for(unsigned i = 0; i < hand.size() - 2; i ++){
		if(hand[i].info.rank == hand[i+1].info.rank && hand[i+1].info.rank == hand[i+2].info.rank){
			if(hand[i].info.suit != hand[i+1].info.suit && hand[i+1].info.suit != hand[i+2].info.suit && hand[i+2].info.suit != hand[i].info.suit){
				return true;
			}
		}
	}
	return false;
}
bool Hand::flush() {
	unsigned num_match_suits = 0;
	for(unsigned i = 0; i < hand.size()-1; i ++){
		if(hand[i].info.suit == hand[i+1].info.suit)
			num_match_suits ++;
	}
	if(num_match_suits == 4)
		return true;
	return false;
}
bool Hand::full_house() {
	if(three_of_kind() && two_of_kind())
		return true;
	return false;
}
bool Hand::straight_flush() {
	if(flush() && is_straight())
		return true;
	return false;
}
bool Hand::royal_flush() {
	if(straight_flush() && 1 == hand[0].info.rank)
		return true;
	return false;
}
