#include "main.h"

/**
 * read_textfile - reads text file and prints it to stdout
 *
 * @filename: the name of the file
 * @letters: number of letters to be printed to stdout
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t read_file;
	ssize_t size;
	char *buffer;

	if (filename == NULL)
		return (0);

	t = open(filename, O_RDONLY);
	if (t == -1)
	{
		close(t);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(t);
		return (0);
	}

	size = read(t, buffer, letters);
	if (size == -1)
	{
		close(t);
		free(buffer);
		return (0);
	}

	read_file = write(STDOUT_FILENO, buffer, size);
	if (read_file == -1)
	{
		close(t);
		free(buffer);
		return (0);
	}

	close(t);
	return (size);
}
