#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

/**
 * main - The initial main function
 *
 * Description: Using the write function to print stderr
 * Return: returning 1
 */
int main(void)
{
	char *buf1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, buf1, 58);
	return (1);
}
