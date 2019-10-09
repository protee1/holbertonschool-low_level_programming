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


	for (i = 0; haystack[i] != '\0';)
	{
		for(j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (&haystack[i]);
			}
		}
		if(needle[i])
		{
			return (&haystack[i + j]);
		}
		i++;
	}
	return ('\0');
}
