#include <stdio.h>
/**
 *main - putchar, print the alphabet with out q and e.
 *
 *Retern: 0.
 */
int main(void)
{
char eq;
for (eq = 'a'; eq <= 'z'; eq++)
if (eq != 'e' && eq != 'q')
{
putchar (eq);
}
putchar ('\n');
return (0);
}
