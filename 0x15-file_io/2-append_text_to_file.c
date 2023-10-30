#include "main.h"

/**
  * append_text_to_file - Append to end of file
  * @filename: The path to the file.
  * @text_content: the string to write
  *
  * Return: 1 if success -1 if there's a value.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int writer, file_d;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		writer = write(file_d, text_content, strlen(text_content));
		if (writer == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
