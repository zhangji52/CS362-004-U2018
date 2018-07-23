
#include <stdio.h>
#include <stdlib.h>
#include "dominion.h"
#include "assert.h"
#include "rngs.h"

int main(int argc, char ** argv){
	struct gameState GameState;
	int random=0;
	int initial=0;

	int _card[4]= {adventurer,gardens,smithy,village};
	random= rand()%4;
	initial= initializeGame(2,_card,random,&GameState);

	assert(initial ==0);
	printf("Unittest 2: \n");

	GameState.coins=5;
	GameState.numBuys=2;

	initial= buyCard(-2,&GameState);
	
	assert (initial ==-1);

	initial= buyCard(2, &GameState);
	assert (initial ==0);

	printf("TEST SUCCESSFULLY COMPLETED \n");
	return 0;


}

