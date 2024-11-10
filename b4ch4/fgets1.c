// fgets1.c -- using fgets() and fputs()
#include <stdio.h>
#define STLEN 14
int main()
{
    char words[STLEN];
    fgets(words,STLEN,stdin);
    puts(words);

    return 0;

}