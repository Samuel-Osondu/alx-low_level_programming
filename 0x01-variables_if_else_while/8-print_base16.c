#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	/**
	 *
	 *hexadecimal
	 * 0 1 2 3 4 5 6 7 8 9 a c d e f
	 */
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar(10);

	return (0);
}


