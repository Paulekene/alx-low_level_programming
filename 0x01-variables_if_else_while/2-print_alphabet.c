#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: Always 0 (Success)
 *
 * Author: Paul Okeke
 */
int main(void)
{
	char alxAlp[26] = "abcdefghijklmnopqrstuvwxyz";
	int counter;

	for (counter = 0; counter < 26; counter = counter + 1)
	{
		putchar(alxAlp[counter]);
	}
	putchar('\n')'
	return (0);
}
