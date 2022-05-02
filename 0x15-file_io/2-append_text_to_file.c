#include "main.h"

/**
 * append_text_to_file- appends text to end of a file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 if file exists, -1 if file doesn't exist, 0 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, count;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		w = write(f, text_content, count);

		if (w == -1)
			return (-1);
	}

	close(f);

	return (1);
}
