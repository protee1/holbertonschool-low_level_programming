#include "3-calc.h"
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int num1, num2, total;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	operation = get_op_func(argv[2])(num1, num2);
	total = operation(argv[1], argv[2]);

	printf("%d\n", total);
	return (0);
}
