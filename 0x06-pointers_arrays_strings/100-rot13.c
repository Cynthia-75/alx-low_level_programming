#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(chat *s)
{
	int i, j;

	char *x =
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y =
		"nopqrsruvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}

	return (s);
}
