
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
	printf("Unittest 3: \n");


	GameState.deckCount[1]= -5;
	initial= shuffle(1,&GameState);
	assert(initial ==-1);

	GameState.deckCount[1]=3;
	initial= shuffle(1,&GameState);
	assert (result ==0);

	printf("Unittest3 SUCCESSFULLY COMPLETED");
	return 0;

}

