#include <stdio.h>

/**
 * main - Entry point for Hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char str;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i + 'a');
}
putchar('\n');
return (0);
}
