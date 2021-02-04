#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Random int designation
 *
 * Return: Value of None
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lst = (n % 10);

	if (lst > 5)
		printf("The last digit of %d is %d and is greater than 5\n", n, lst);

	else if (lst == 0)
		printf("The last digit of %d is %d and is 0\n", n, lst);

	else
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lst);
return (0);
}
