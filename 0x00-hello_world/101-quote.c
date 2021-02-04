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
	int fd[2];
	char buf1[58] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(fd[2], buf1, strlen(buf1));
	return (1);
}
