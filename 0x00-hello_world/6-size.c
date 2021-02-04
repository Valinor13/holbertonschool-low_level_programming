#include <stdio.h>

/**
 * main - the primary function of this program
 *
 * Description: its doing stuff
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %lu\n byte(s)", (unsigned long)sizeof(char));
	printf("Size of an int: %lu\n byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu\n byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu\n byte(s)", (unsigned long)sizeof(float));
	return (0);
}

