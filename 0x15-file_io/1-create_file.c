#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: the name of file to be created
 * @text_content: input string to be written to file
 *
 * Return: on success 1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int t;
	int size;
	char *buffer;
	ssize_t wr;

	if (filename == NULL)
		return (-1);

	t = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (t == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	size = strlen(text_content);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		close(t);
		return (-1);
	}

	wr = write(t, text_content, size);
	if (wr == -1)
	{
		close(t);
		return (-1);
	}

	close(t);
	return (1);
}
