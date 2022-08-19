#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0, count = 0, base = 1;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	count = strlen(b);

	for (n = count - 1; n >= 0; n--)
	{
		if (b[n] < '0' || b[n] > '1')
		{
			return (0);
		}
		else if (b[n] == '1')
		{
			num = num + base;
		}
			base = base * 2;
		}
		return (num);
}
