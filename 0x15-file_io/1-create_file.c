#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_file - A function that creates a file.
  * @filename: The path to the file.
  * @text_content: The content to add to newly created file.
  *
  * Return: 1 on success -1 otherwise
  */

int create_file(const char *filename, char *text_content)
{
	int i, writer, file_d;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file_d == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
	{
		writer = write(file_d, text_content, i);
	}

	if (writer == -1)
		return (-1);

	close(file_d);
	return (1);
}
