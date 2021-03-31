#include "holberton.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: text to append to file
 * Return: returns 1 for success -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bsz = 0, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[bsz])
		bsz++;
	wr = write(fd, text_content, bsz);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
return (1);
}
