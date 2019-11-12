#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on Success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filed, i;

	if (filename == NULL)
	{
		return (-1);
	}

	filed = open(filename, O_CREAT | O_WRONLY, 0600);

	if (filed == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (i = 0 ; text_content[i] != NULL ; i++)
		;

	write(filed, text_content, i);
	close(filed);
	return (1);
}
