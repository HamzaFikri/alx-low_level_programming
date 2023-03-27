#include "main.h"

/**
* swap_int -  swaps the values of two integers
* @a: the first integer to be swapped.
* @b: The second integer to be swapped.
*/

void swap_int(int *a, int *b)
{
int mix = *a;
*a = *b;
*b = mix;
}
