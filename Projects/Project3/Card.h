/*
 * Card.h
 *
 *  Created on: Oct 12, 2015
 *      Author: dillon
 */
#include <string>
#ifndef CARD_H_
#define CARD_H_

struct RankSuit{
	char suit;
	int rank;
	RankSuit(char s, int r): suit(s),rank(r){}
};
class Card {
public:
	RankSuit info;
	Card(int rank, char suit);
	virtual ~Card();
	std::string string_representation();
	RankSuit rank_suit();
};

#endif /* CARD_H_ */
