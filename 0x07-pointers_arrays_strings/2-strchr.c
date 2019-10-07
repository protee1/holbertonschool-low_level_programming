#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: the memory area
 * @c: constant byte
 *
 * Return: a pointer when the character is found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c)
		{
			return (s);
		}
		else if (s[i] == '\0')
		{
			return ('\0');
		}
		s++;
	}
	return (0);
}
