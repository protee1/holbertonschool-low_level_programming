#include "holberton.h"
/**
 * print_rev -prints a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;

	i = _strlen(s);

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
/**
 * _strlen - give the length of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
