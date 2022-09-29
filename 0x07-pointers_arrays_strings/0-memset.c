#include "main.h"

/**
 *_memset - function that fills memory with a constant byte
 *@s: memory area pointer
 *@b: constant byte
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int d;
for (d = 0; d < n; d++)
{
s[d] = b;
}
return (s);
}
