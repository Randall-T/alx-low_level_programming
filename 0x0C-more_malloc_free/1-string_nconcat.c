#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- function that allocates memory using malloc
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: no of s2 to be concatenated
 * Return: returns a pointer to the allocated memory or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *s3;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s3 = malloc(sizeof(char) * (len1 + n + 1));
	else
		s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	while (n >= len2 && i < (len1 + len2))
	{
		s3[i] = s2[j];
		i++;
		j++;
	}

	s3[i] = '\0';

	return (s3);
}
