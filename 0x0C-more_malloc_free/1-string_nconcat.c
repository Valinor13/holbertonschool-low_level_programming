#include "holberton.h"

/**
 * string_nconcat - concatenates 2 strings up to n length
 * @s1: input string 1
 * @s2: input string 2
 * @n: input length max
 * Return: returns a pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, x;

	i = 0;
	j = 0;

	if (s1 == NULL)
		*s1 = 00;

	if (s2 == NULL)
		*s2 = 00;

	while (s1[i] != 00)
		i++;

	while (s2[j] != 00)
		j++;

	if (j > n)
		j = n;

	s3 = malloc(sizeof(char) * (i + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != 00; i++)
		s3[i] = s1[i];

	for (x = 0; x < j; i++, x++)
		s3[i] = s2[x];

	s3[i] = 00;

return (s3);
}
