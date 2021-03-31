#include "holberton.h"

/**
 * create_file - creates a new .txt file
 * @filename: string for name of .txt
 * @text_content: - what to put in the file
 * Return: returns 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bsz = 0, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	while (text_content[bsz])
		bsz++;
	bsz += 1;
	wr = write(STDOUT_FILENO, text_content, bsz);
	if (wr == -1)
		return (-1);
	close(fd);
return (1);
}
