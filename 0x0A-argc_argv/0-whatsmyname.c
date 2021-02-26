#include "holberton.h"
#include <stdio.h>

/**
 * main - prints its own filename
 * @argc: argv array size
 * @argv: array of strings input form the command line
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
		if (argc > 0)
		{
			printf("%s\n", argv[0]);
		}

		return (0);
}

