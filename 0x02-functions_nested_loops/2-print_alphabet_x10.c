#include "holberton.h"
/**
 * print_alphabet_x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;

	count = 0;

	while (count <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		count++;
		_putchar('\n');
	}
}
