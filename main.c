#include <stdio.h>
#include <stdlib.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

double zamiana (int f)
{
    double c = (5.0/9.0)*(f-32);
    return c;
}

int main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%6.1f %3d\n", zamiana(fahr), fahr);

    return 0;
}
