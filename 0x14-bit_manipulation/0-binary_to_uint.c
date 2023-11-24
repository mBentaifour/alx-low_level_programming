#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - a function that converts a binary number
* @b : pointing to a string of 0 and 1 chars
*
* Return: the converted number or 0 if
* there is one or more chars in the string b that is not 0 or 1
* b is NULL
*
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int nr = 0;
	int i;

	if (b == NULL)
	return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	{
	return (0);
	}
	nr = (nr << 1) + (b[i] - 48);
	}
	return (nr);
}
