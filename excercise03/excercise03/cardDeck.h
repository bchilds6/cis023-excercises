#pragma once
#include "arrayListType.h"
class cardDeck
{
public:
	struct card;
	cardDeck();
	~cardDeck();
	card getCard(int);
	void shuffleDeck();
private:
	int numberOfCards;
};

