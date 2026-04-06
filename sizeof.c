#include <stdio.h>

int main(){
    int n = 0;
    char c = 'A';
    size_t intsize, charsize;

    intsize = sizeof(int);
    charsize = sizeof(char);
    printf("n = %d has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
    printf("n = %c has %u bytes; all ints have %u bytes.\n", c, sizeof c, charsize);

    return 0;
}