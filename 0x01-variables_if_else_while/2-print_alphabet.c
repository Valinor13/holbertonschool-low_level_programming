#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Random int designation
 *
 * Return: Value of None
 */
int  main(void)
{
	int c;
	char alph[26];

	alph[0] = 'a';
	alph[1] = 'b';
	alph[2] = 'c';
	alph[3] = 'd';
	alph[4] = 'e';
	alph[5] = 'f';
	alph[6] = 'g';
	alph[7] = 'h';
	alph[8] = 'i';
	alph[9] = 'j';
	alph[10] = 'k';
	alph[11] = 'l';
	alph[12] = 'm';
	alph[13] = 'n';
	alph[14] = 'o';
	alph[15] = 'p';
	alph[16] = 'q';
	alph[17] = 'r';
	alph[18] = 's';
	alph[19] = 't';
	alph[20] = 'u';
	alph[21] = 'v';
	alph[22] = 'w';
	alph[23] = 'x';
	alph[24] = 'y';
	alph[25] = 'z';
	for (c = 0; c <= 25; c++)
	{
		putchar(alph[c]);
	}

return (0);
}

