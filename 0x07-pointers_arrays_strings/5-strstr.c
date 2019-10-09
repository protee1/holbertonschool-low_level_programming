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


	for (i = 0; needle[i] != '\0'; i++)
	{
		for(j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j]);
			}
		}
		if(needle[i] == '\0')
		{
			return (haystack + (i - 1));
		}
	}
	return ('\0');
}
