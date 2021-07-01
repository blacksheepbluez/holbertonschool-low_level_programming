#include <stdio.h>
/**
 *main - print single digits, newline, putchar only.
 *Return: 0
 */
int main(void)
{
int wrx;
for (wrx = '0'; wrx <= '9'; wrx++)
{
putchar(wrx);
}
putchar('\n');
return (0);
}
