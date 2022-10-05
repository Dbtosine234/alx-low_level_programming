#include "main.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *dupl;
	int d, b;

	if (str == NULL)
		return (NULL);

	for (d = 0; str[d] != '\0'; d++)
		;

	dupl = malloc(sizeof(char) * (d + 1));

	if (dupl == NULL)
		return (NULL);

	for (b = 0; (dupl[b] = str[b]) != '\0'; b++)
		;

	dupl[d] = '\0';

	return (dupl);
}
