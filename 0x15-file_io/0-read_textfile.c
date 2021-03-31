#include "holberton.h"

/**
 * read_textfile - reads an input .txt
 * @filename: pointer to input .txt
 * @letters: size of buffer for file r/w
 * Return: returns signed int of chars written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(buff) * letters);
	if (buff == NULL)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}
	if (rd > 0)
		wr = write(STD_FILENO, buff, rd);
	if (wr == -1 || wr < rd)
	{
		free(buff);
		return (0);
	}

	wr = close(fd);
	free(buff);
return (rd);
}
