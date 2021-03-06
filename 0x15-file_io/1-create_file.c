#include "main.h"

/**
 * create_file- create a file and write to it
 * @filename: name of the file
 * @text_content: content to be written to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int f, w, count;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count = 0; text_content[count]; count++)
		;

	w = write(f, text_content, count);

	if (w == -1)
		return (-1);

	close(f);

	return (1);
}
