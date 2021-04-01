#include "holberton.h"

/**
 * main - copy one file to another
 * @argv: input arguments
 * @argc: argument count
 * Return: returns 1 for success -1 for failure
 */
int main(int argc, char **argv)
{
	int file_from, file_to, wr_num, read_num, closer, open_flags;
	char buff[1024];

	open_flags = O_CREAT | O_RDWR | O_TRUNC;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], open_flags, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't wrtie to %s\n", argv[2]);
		exit(99);
	}
	while ((read_num = read(file_from, buff, 1024)) > 0)
	{
		wr_num = write(file_to, buff, read_num);
		if (wr_num == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	closer = close(file_from);
	if (closer == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	closer = close(file_to);
	if (closer == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

return (1);
}
