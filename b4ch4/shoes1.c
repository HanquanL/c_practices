// shoes1.c -- convert a shoe size to inches
#include <stdio.h>
#define ADJUST 7.31
int main()
{
    const double SCALE = 0.333;
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;   
    printf("Shoe size(men's)   foot length\n");
    printf("%10.1f %13.2f inches\n", shoe, foot);
    return 0;

}