#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the low case alphabet in reverse,
 * followed by a new line
 *
 * Return: 0 if success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	putchar(10);

	return (0);
}
