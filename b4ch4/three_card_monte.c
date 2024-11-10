#include <stdio.h>

int main()
{
    char cards[] = "JQK";
    // char *cards = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
    // puts(cards);
    char masked_raider[] = "Alive";
    char * jimmy = masked_raider;
    printf("%s\n", jimmy);
    printf("%p\n", &jimmy);
    return 0;
}