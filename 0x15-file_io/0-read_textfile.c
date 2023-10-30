#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * read_textfile - Read text from file and print it to standard output
  * @filename: The path to the file from which we want to read.
  * @letters: Size of the characters to print.
  *
  * Return: The size of the printed characters.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t reader, writer;
	int fd;

	/* Check if filename exists and file descriptor*/
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	/* Allocate a buffer space to hold reading result */
	buffer = malloc(sizeof(char) * letters);

	/* Read characters of size letters from fd to buffer*/
	reader = read(fd, buffer, letters);

	writer = write(1, buffer, reader);

	free(buffer);
	close(fd);
	return (writer);
}
