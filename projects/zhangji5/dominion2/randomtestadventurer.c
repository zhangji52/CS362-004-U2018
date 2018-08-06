#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include "dominion.h"
#include "rngs.h"

int main(){
	struct gameState G;
	int result, rando = 0, player = 1, handCount, deckCount, good = 0, bad =0;
	int k[10] = {adventurer, gardens, embargo, village, minion, mine, cutpurse,
			sea_hag, tribute, smithy};
	printf("Start Random Testing Card for adventurer.\n");
	
  for(int j = 0; j < 4; j++){
		printf("Start running %d\n", j+1);
		for(int i = 0; i < 500; i++){
			//loop through
			printf("Run #%d\n", i);
			int numPlayers = rand() % 4;
			int gameSeed = rand() % 5000;
			
			//initializing game
			initializeGame(numPlayers, k, gameSeed, &G);
			
			rando = rand() % 10;
			if(rando == 5){
				G.deckCount[player] = 0;
				deckCount = 0;
			}
			else{
				rando = rand() % MAX_DECK;
				G.deckCount[player] = rando;
				deckCount = rando;
			}
			
			rando = rand() % MAX_DECK;
			G.handCount[player] = rand() % MAX_HAND;
			handCount = rando;
			
			G.discardCount[player] = rand() % MAX_DECK;
			
			result = cardEffect(adventurer, 1, 1, 1, &G);
			if(result == 0){
				good++;
			}
			else{
				bad++;
			}
		}
	}
	printf("Test successfully completed!\n");
	if(bad > good){
		printf("Bad tests are more than good ones!\n");
		return 0;
	}
	else{
		printf("Most tests returned good!\n");
		return 1;
	}
}
