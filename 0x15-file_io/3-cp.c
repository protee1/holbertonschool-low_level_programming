#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * main - copies the content of a file to another file
 * @argv: argument vector
 * @argc: argument count
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int ff, ft, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from a file %s\n", argv[0]);
		exit(98);
	}

	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	buffer = malloc(1024);
	while ((r = read(ff, buffer, 1024)) != 0)
		write(ft, buffer, r);

	if (close(ff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", ff);
		exit(100);
	}

	if (close(ft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", ft);
		exit(100);
	}
	return (0);
}
