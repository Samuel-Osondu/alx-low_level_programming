#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, e, f, g;

	for (a = 48; a <= 57; a++)
	{
		for (e = 48; e <= 57; e++)
		{
			for (f = 48; f <= 57; f++)
			{
				for (g = 48; g <= 57; g++)
				{
				if (((f + g) > (a + e) && f >= a) || a < f)
				{
					putchar(a);
					putchar(e);
					putchar(' ');
					putchar(f);
					putchar(g);

					if (a + e + f + g == 227 && a == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
