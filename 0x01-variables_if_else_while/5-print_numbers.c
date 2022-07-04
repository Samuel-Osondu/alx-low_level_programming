#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all single digit number of base 10 starting from zero
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}
