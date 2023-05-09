#include "main.h"

#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"

/**
 * main - copies content from one file to another
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: on success 0
 */
int main(int argc, char **argv)
{
	int from_file, to_file, close_file, wr, rd;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n"), exit(97);

	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
		dprintf(STDERR_FILENO, READ_ERROR, argv[1]), exit(98);
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_file == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, argv[2]), exit(99);

	while (1)
	{
		rd = read(from_file, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, READ_ERROR,
				argv[1]), exit(98);
		if (rd > 0)
		{
			wr = write(to_file, buffer, rd);
			if (wr == -1)
				dprintf(STDERR_FILENO, WRITE_ERROR,
					argv[2]), exit(99);
		}
		else
			break;
	}

	close_file = close(from_file);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			from_file), exit(100);
	close_file = close(to_file);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			to_file), exit(100);
	return (0);
}
