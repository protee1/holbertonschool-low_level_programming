#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
		while (accept[j] != '\0')
		{
			j++;
			if (accept[j] == s[i])
			{
				j++;
				i++;
				return (j + i);
			}
		}
	}
	if (accept[j] != s[i])
	{
		return ('\0');
	}
	return (0);
}
