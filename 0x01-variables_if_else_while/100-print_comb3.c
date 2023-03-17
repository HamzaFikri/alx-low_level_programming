#include <stdio.h>

/**
 * main - Entry point for 00 to 99
 *
 * Return: Always 0
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 9 && j == 9)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
