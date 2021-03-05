#include <stdio.h>
#include <stdlib.h>


void helper_func()
{
	puts("Inside helper function");
}



int main(void)
{
	puts("Hello");
	helper_func();
	puts("Goodbye");
	return (3);
}
