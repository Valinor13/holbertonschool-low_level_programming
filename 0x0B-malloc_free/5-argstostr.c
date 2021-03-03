#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - takes in strings in an array and prints them
 * @ac: argument count
 * @av: array of strings
 * Return: returns a char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, zed, len;
	char *ptr;

	len = 1;
	zed = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 00; j++)
		{
			len++;
		}

		len += 1;
	}

	ptr = (char *)malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 00; j++)
		{
			ptr[zed] = av[i][j];
			zed++;
		}

		ptr[zed] = '\n';
		zed++;
	}

	zed += 1;
	ptr[zed] = '\0';

return (ptr);
}
