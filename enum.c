// enum.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

enum card_suit { Spades, Heart, DIA, CLB };
enum card_rank { ACE = 1, JACK = 11, QUEEN, KING };

const char * aceString = "Ace";
const char * jckString = "Jack";
const char * queString = "Queen";
const char * kngString = "King";
const char * SpadesString = "Spades";
const char * HeartString = "Hearts";
const char * diaString = "Diamonds";
const char * clbString = "Clubs";

typedef struct card {
	unsigned char r;
	unsigned char s;
} card_t;

card_t deck[52] = {
		{ ACE, Spades }, { 2, Spades }, { 3, Spades }, { 4, Spades }, { 5, Spades }, { 6, Spades }, { 7, Spades },
		{ 8, Spades }, { 9, Spades }, { 10, Spades }, { JACK, Spades }, { QUEEN, Spades }, { KING, Spades },
		{ 1, Heart }, { 2, Heart }, { 3, Heart }, { 4, Heart }, { 5, Heart }, { 6, Heart }, { 7, Heart },
		{ 8, Heart }, { 9, Heart }, { 10, Heart }, { JACK, Heart }, { QUEEN, Heart }, { KING, Heart },
		{ 1, DIA }, { 2, DIA }, { 3, DIA }, { 4, DIA }, { 5, DIA }, { 6, DIA }, { 7, DIA },
		{ 8, DIA }, { 9, DIA }, { 10, DIA }, { JACK, DIA }, { QUEEN, DIA }, { KING, DIA },
		{ 1, CLB }, { 2, CLB }, { 3, CLB }, { 4, CLB }, { 5, CLB }, { 6, CLB }, { 7, CLB },
		{ 8, CLB }, { 9, CLB }, { 10, CLB }, { JACK, CLB }, { QUEEN, CLB }, { KING, CLB }
};

void print_card( const card_t * c );

int main( int argc, char ** argv ) {

	for( int i = 0; i < 52 ; i++ ) {
		print_card(&deck[i]);
	}

	return 0;
}

void print_card( const card_t * c ) {
	if(c->r >= 2 && c->r <= 10) {
		printf("%d", c->r);
	} else {
		switch(c->r) {
		case ACE:
			fputs(aceString, stdout);
			break;
		case JACK:
			fputs(jckString, stdout);
			break;
		case QUEEN:
			fputs(queString, stdout);
			break;
		case KING:
			fputs(kngString, stdout);
			break;
		}
	}
	fputs(" of ", stdout);
	switch(c->s) {
	case Spades:
		fputs(SpadesString, stdout);
		break;
	case Heart:
		fputs(HeartString, stdout);
		break;
	case DIA:
		fputs(diaString, stdout);
		break;
	case CLB:
		fputs(clbString, stdout);
		break;
	}
	fputs("\n", stdout);
}
