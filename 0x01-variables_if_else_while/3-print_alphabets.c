#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets in lowercase and then in uppercase'
 * Return: always 0
 */
int main(void)
{
	int n = 67;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
	return (0);
}
