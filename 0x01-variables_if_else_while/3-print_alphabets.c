#include <stdio.h>
/**
 main - prints the alphabet using the putchar function.
 *
 Return: 0.
*/
int main(void)
{
char xyz;
for (xyz = 'a'; xyz <= 'z'; xyz++)
putchar (xyz);
for (xyz = 'A'; xyz <= 'A'; xyz++)
putchar (xyz);
putchar('\n');
return (0);
}
