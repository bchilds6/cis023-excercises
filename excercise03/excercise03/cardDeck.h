#pragma once
#include "arrayListType.h"
#include "card.h"
#include <iostream>
class cardDeck : public arrayListType
{
public:

	virtual void insertAt(int location, int insertItem);
	void insertAt(int location, card insertItem);
	virtual void insertEnd(int insertItem);
	void insertEnd(card insertItem);
	virtual void replaceAt(int location, int repItem);
	void replaceAt(int location, card repItem);
	virtual int seqSearch(int searchItem) const;
	virtual void remove(int removeItem);
	void remove(card removeItem);
	cardDeck();
	~cardDeck();
	//card getCard(int);
	void shuffleDeck();
protected:
	card *deck;
	int numberOfCards;
};

