#include <stdio.h>
/**
 *main - alternates alphabet characters using putchar function
 *
 * Return: 0.
 */
int main(void)
{
char max;
for (max = '0'; max <= '9'; max++)
{
putchar((max)+'0');
putchar((max%1)+'0');
putchar('\n');
}
return (0);
}
