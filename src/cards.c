#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct card
{
    const char *face; // define pointer face
    const char *suit; // define pointer suit
};                    // end struct card

typedef struct card Card; // new type name for struct card

// prototypes
void fillDeck(Card *const wDeck, const char *wFace[], const char *wSuit[]);

void shuffle(Card *const wDeck);
void deal(const Card *const wDeck);

int main(void)
{
    Card deck[CARDS]; // define array of Cards

    // initialize array of pointers
    const char *face[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    // initialize array of pointers
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL)); // randomize

    fillDeck(deck, face, suit); // load the deck with Cards
    shuffle(deck);              // put Cards in random order
    deal(deck);                 // deal all 52 Cards
}

// place strings into Card Structures
void fillDeck(Card *const wDeck, const char *wFace[], const char *wSuit[])
{
    size_t i; // counter

    // loop through wDeck
    for (i = 0; i < CARDS; ++i)
    {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    } // end for
} // end function fillDeck

// shuffle cards

void shuffle(Card *const wDeck)
{
    size_t i, j;
    Card temp; // define temporary structure for swapping cards

    for (i = 0; i < CARDS; ++i)
    {
        j = rand() % CARDS;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    } // end for
} // end function shuffle

void deal(const Card *const wDeck)
{
    size_t i;

    // loop through wDeck
    for (i = 0; i < CARDS; i++)
    {
        printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
    } // end for
} // end function deal
