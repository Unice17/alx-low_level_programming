#include "main.h"
/**
 *_memset - fill a block of memory with a specific value 
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes 
 */
char*_memset(cha*s, char b, unsigned int n)
{
	unsigned int i = 0

	while (1 < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

