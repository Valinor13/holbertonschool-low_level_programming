nclude <stdio.h>
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
	alph[4] = 'f';
	alph[5] = 'g';
	alph[6] = 'h';
	alph[7] = 'i';
	alph[8] = 'j';
	alph[9] = 'k';
	alph[10] = 'l';
	alph[11] = 'm';
	alph[12] = 'n';
	alph[13] = 'o';
	alph[14] = 'p';
	alph[15] = 'r';
	alph[16] = 's';
	alph[17] = 't';
	alph[18] = 'u';
	alph[19] = 'v';
	alph[20] = 'w';
	alph[21] = 'x';
	alph[22] = 'y';
	alph[23] = 'z';
	for (c = 0; c <= 23; c++)
	{
		putchar(alph[c]);
	}
	putchar('\n');
return (0);
}
