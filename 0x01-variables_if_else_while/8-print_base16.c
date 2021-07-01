#include <stdio.h>
/**
 *main - alternates characters using putchar function
 *
 * Return: 0.
 */
int main(void)
{
char betty;
for (betty = '0'; betty <= '9'; betty++)
{
putchar (betty);
}
for (betty = 'a'; betty <= 'f'; betty++)
{
putchar (betty);
}
putchar('\n');
return (0);
}
