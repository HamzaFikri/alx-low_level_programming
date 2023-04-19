#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*op_func)(int, int), num1, num2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!num2 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(num1, num2));
	return (0);
}
