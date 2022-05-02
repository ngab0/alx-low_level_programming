#include "main.h"

/**
 * read_textfile- read a text file and print it to the POSIX stdout
 * @filename: name of the file
 * @letters: number of letters printed
 * 
 * Return: number of letters printed. Returns 0 if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t i, j;
	char *buf;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof((char) * letters));
	if (buf == NULL)
		return (0);

	i = read(f, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	close(f);

	free(buf);

	return (j);
}
