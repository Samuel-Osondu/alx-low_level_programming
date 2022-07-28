#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - a function that allocate memory to a
 * pointer and concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to extract from second string
 * Return: address of allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *count_string;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	if (n > j)
		n = j;

	count_string = malloc(((i + n) + 1) * sizeof(char));
	if (count_string == NULL)
		return (NULL);

	for (k = 0; k < (i + n); k++)
	{
		if (k < i)
		{
			count_string[k] = s1[k];
		}
		else
		{
			count_string[k] = s2[k - i];
		}
	}
	count_string[k] = '\0';
	return (count_string);
}
