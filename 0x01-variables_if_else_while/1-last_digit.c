#include <stdlib.h>
#include <time.h>
/** 
 * main: This is the entry point of the program
 * Author: Paul Okeke
 * Date: 9th November 2022
 * Details: This program uses random number to generate series
 * Return: 0 (success) otherwise non=zero
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

