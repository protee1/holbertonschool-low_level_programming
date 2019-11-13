#include "holberton.h"
/**
 * append_text_to_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 on Success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed, i;

	if (filename == NULL)
	{
		return (-1);
	}

	filed = open(filename, O_CREAT | O_APPEND);

	if (filed == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		for (i = 0 ; text_content[i] != '\0' ; i++)
			;
		if (write(filed, text_content, i) == -1)
		{
			return (-1);
		}
	}

	close(filed);
	return (1);
}
