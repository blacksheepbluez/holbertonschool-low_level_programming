#include <stdio.h>
/**
 *main - prints the alphabet using the putchar function.
 *
 *Return: 0.
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
