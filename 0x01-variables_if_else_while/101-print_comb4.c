#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function main
 *
 * Return: Always 0
 */
int main(void)
{
int x;
int y;
int z;

x = 48;
y = 49;
z = 50;
while  ((x < 56) && (y < 57) && (z < 58))
{
putchar(x);
putchar(y);
putchar(z);
if ((x == 55) && (y == 56) && (z == 57))
{
putchar('\n');
x++;
y++;
z++;
}
else
{
putchar(44);
putchar(32);
if (z < 57)
{
z++;
}
else if ((y < 56) && (z == 57))
{
z = 1 + ++y;
}
else
{
y = 1 + ++x;
z = 1 + y;
}
}
}
return (0);
}
