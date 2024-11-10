// swap3.c -- using poiners to make swapping work
#include <stdio.h>
void interchange(int * u, int * v);

int main()
{
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y); // send addresses to function
    printf("Now x = %d and y = %d.\n", x, y);
    return 0;
}

void interchange(int * u, int * v)
{
    int temp;
    temp = *u; // save the value at address u
    *u = *v; // put v into u
    *v = temp; // put u into v
}