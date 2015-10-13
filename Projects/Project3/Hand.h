/*
 * Hand.h
 *
 *  Created on: Oct 12, 2015
 *      Author: dillon
 */
#include <vector>
#include "Card.h"

#ifndef HAND_H_
#define HAND_H_

class Hand {
public:
	std::vector<Card> hand;
	Hand();
	virtual ~Hand();
	void add_card(Card& c);
	std::string cards_in_hand();
	std::string evaluate();
private:
	bool is_straight();
	bool two_of_kind();
	bool two_pair();
	bool three_of_kind();
	bool streight();
	bool flush();
	bool full_house();
	bool straight_flush();
	bool royal_flush();
	void sort_rank();
	void sort_suit();
};

#endif /* HAND_H_ */
