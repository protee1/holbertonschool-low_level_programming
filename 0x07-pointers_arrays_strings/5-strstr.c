#include "holberton.h"
/**
 * _strstr - locates a substring
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while(needle[i] != '\0')
	{
		j = 0;
		while(haystack[j] != '\0')
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
