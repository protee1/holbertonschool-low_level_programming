#include "holberton.h"
/**
 * print_line -drws a straight line in the terminal
 * @n: the number of times that the special character must be printed
 *
 * Return: a straight line
 */
void print_line(int n)
{
	int a;

	for (a = 0 ; a <= n ; a++)
	{
		_putchar(95);
	}
		_putchar('\n');
}
