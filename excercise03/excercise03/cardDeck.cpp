#include "cardDeck.h"
#include <iostream>


void cardDeck::insertAt(int location, int insertItem) {
}

void cardDeck::insertAt(int location, card insertItem) {

}

void cardDeck::insertEnd(int insertItem) {
}

void cardDeck::insertEnd(card insertItem) {

}

void cardDeck::replaceAt(int location, int repItem) {
}

void cardDeck::replaceAt(int location, card repItem) {

}

int cardDeck::seqSearch(int searchItem) const
{
	return 0;
}

void cardDeck::remove(int removeItem)
{
}

void cardDeck::remove(card removeItem) {
}



cardDeck::cardDeck() {
	maxSize = 52;

	length = 0;

	deck = new card[maxSize];

	for (int i = 0; i < 4; i++) {
		for (int x = 1; x < 14; x++) {
			int index = x -1 + 13 * i;
			deck[index].cardNumber = x;
			deck[index].suite = i;
			length++;
		}
	}
	
}


cardDeck::~cardDeck()

{
	delete[] list;
}



/*card cardDeck::getCard(int)
{
	return card();
}
*/
void cardDeck::shuffleDeck()
{
}
