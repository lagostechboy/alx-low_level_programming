#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from the second string
 *
 * Description:
 * - The returned pointer shall point to a newly allocated space in memory,
 *   which contains s1, followed by the first n bytes of s2, and null
 *   terminated
 * - If the function fails, it should return NULL
 * - If n is greater or equal to the length of s2 then use the entire string s2
 * - if NULL is passed, treat it as an empty string
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int nlen, y = 0, z = 0, i, j, k = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[y])
		y++;
	while (s2[z])
		z++;

	if (n > z)
	  nlen = y + z;
	else
	  nlen = y + n;

	string = malloc((nlen + 1) * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		string[k] = s1[i];
		k++;
	}

	for (j = 0; k < nlen; j++)
	{
		string[k] = s2[j];
		k++;
	}
	string[nlen] = '\0';

	return (string);
}
