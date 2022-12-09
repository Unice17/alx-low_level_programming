#include <stdio>

/**
 * main - Lazador
 *
 * Return: Always 0
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar (a);
	}
	for (b = 'A'; b <= 'z'; b++)
	{
		putchar (b);
	}
	putchar ('\n');
	return (0);
}
