#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(int argc, char *argv[])
{
  srand(time(NULL));
  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());
  return 0;
}
