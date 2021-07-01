#include <stdio.h>
/**
 *main - alternates alphabet characters using putchar function
 *
 * Return: 0.
*/
int main(void)
{
char betty;
for (betty = 'a'; betty <= 'z'; betty++)
{
putchar (betty);
}
for (betty = 'A'; betty <= 'A'; betty++)
{
putchar (betty);
} 
putchar('\n');
return (0);
}
