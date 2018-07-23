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
	printf("Unittest 4: \n");

	int value;
	value= 1;
	initial= getCost(value);

	value= 3;
	initial= getCost(value);

	printf("Unittest 4 SUCCESSFULLY COMPLETED!");

}
	
