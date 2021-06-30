#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
*
*Description: this program determines the randomizer +, =
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
printf("%d is zero\n", n);
else if (n > 0)
printf("%d is negative\n", n);
else if (n < 0)
printf("%d is posotive\n", n);
return (0);
}
