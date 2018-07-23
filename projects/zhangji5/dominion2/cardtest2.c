
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"
#include "dominion.h"
#include "rngs.h"

int main (int argc, char ** argv){
	struct gameState GameState;
	int initial, card, choice1,choice2, choice3, handPos, bonus,random=0;
	int _card[4]= {adventurer, gardens, village,smithy};

	random= rand()%4;
	initial = initializeGame(2,_card,random,&GameState);
	assert(result==0);
	printf("Testing card No.2: \n");

	card=4;
	choice1=0;
	choice2=0;
	choice3=0;
	handPos =4;
	bonus=0;

	initial= smithyFunc(-1,&GameState,4);
	assert(initial ==0);

	initial= smithyFunc(1, &GameState,4);
	assert(initial ==0);

	printf("TEST SUCCESSFULLY COMPLETED!");
	return 0;
}
