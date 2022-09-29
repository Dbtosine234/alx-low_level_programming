#include "main.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: memory area pointer
 *@src: memory area pointer
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
