
// Cpp program for guessing game
// using rand() and srand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GuessGame(int amount_bet, int* inhand_cash)
{
	char Hole[3] = { 'N', 'R', 'N' };
	printf("\nWait !! Rat is shuffling its position...\n");
	srand((time(NULL)));
	int i, x, y, temp;

	/*Swapping the Rat's (R's) position five times using
	the random number for random index*/

	for (i = 0; i < 5; i++) {
		x = rand() % 3;
		y = rand() % 3;
		temp = Hole[x];
		Hole[x] = Hole[y];
		Hole[y] = temp;
	}

	int PlayerGuess;

	printf("\nYou may now guess the hole in which Rat is present: ");

	scanf("%d", &PlayerGuess);

	if (Hole[PlayerGuess - 1] == 'R') {
		(*inhand_cash) += 2 * amount_bet;
		printf("You win ! The holes are as follows: ");
		printf("\"%c %c %c\" ", Hole[0], Hole[1], Hole[2]);
		printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
	}

	else {
		(*inhand_cash) -= amount_bet;
		printf("You Loose ! The holes are as follows: ");
		printf("\"%c %c %c\" ", Hole[0], Hole[1], Hole[2]);
		printf("\nYour inhand_cash is now = %d \n", *inhand_cash);
	}
}

int main()
{
	int amount_bet, inhand_cash;
	/*
	You have to guess the hole in which the
	Rat is hidden among three holes
	The hole in which Rat is present is
	named as 'R' and rest two are named as 'N'
	If your guess is wrong, you loose the
	amount_bet from your inhand_cash
	If you guess it right, you win
	twice the amount_bet in your inhand_cash
	Keep playing and keep winning
	until you go out of cash
	*/

	printf("----Enter the inhand_cash you have right now---- : ");

	scanf("%d", &inhand_cash);

	while (inhand_cash > 0) {
		printf("\nEnter the amount_bet you want to play for : ");
		scanf("%d", &amount_bet);
		if (inhand_cash == 0 || amount_bet > inhand_cash)
			break;
		GuessGame(amount_bet, &inhand_cash);
	}

	if (inhand_cash == 0 || amount_bet > inhand_cash) {
		printf("\n\""
			"  Sorry you don't have enough cash to play more, ");
		printf("Do come next time\""
			"\n");
		printf("Thank You for playing  \n");
	}
	return 0;
}
