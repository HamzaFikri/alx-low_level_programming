#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}