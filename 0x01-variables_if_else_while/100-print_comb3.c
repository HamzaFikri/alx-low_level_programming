#include <stdio.h>

/**
 * main - Entry point for 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int num1 = i * 10 + j;
int num2 = j * 10 + i;
if (num1 != num2)
{
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
