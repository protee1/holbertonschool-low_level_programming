#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;

	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j]);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
