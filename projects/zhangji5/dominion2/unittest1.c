#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "dominion.h"
#include "assert.h"
#include "rngs.h"

#define DEBUG 0
#define N_TEST 1


int main(int argc,char ** argv ){
	struct gameState GameState;
	int random=0;
	int initial=0;
	int _card[4]={adventurer,gardens,smithy, village};
	
	random= rand()%4
	initial= initializeGame(2,_card,random,&GameState);

	assert(result ==0);
	printf("UNIT1 SUCESSFULLY COMPLETED! \n");
	
	return 0;
	


}

