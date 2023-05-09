#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: name of the file to be modified
 * @text_content: string to be appended to the file
 *
 * Return: 1 On success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int t;
	int bytes;
	size_t size;

	if (filename == NULL)
		return (-1);

	t = open(filename, O_WRONLY | O_APPEND);
	if (t == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(t);
		return (1);
	}

	while (text_content[size] != '\0')
		size++;

	bytes = write(t, text_content, size);
	if (bytes == -1)
	{
		close(t);
		return (-1);
	}

	close(t);
	return (1);
}
