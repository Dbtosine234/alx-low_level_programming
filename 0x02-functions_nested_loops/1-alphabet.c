#include <stdio.h>
#include "main.h"
/**
* main - function to print
* Return:0
*/

int main(void)
{
	char dbtosine[8] = {'d', 'b', 't', 'o', 's', 'i', 'n', 'e'};
	unsigned int c;

	for (c = 0; c < sizeof(dbtosine); c++)
	{

	putchar(dbtosine[c]);
	}
	putchar('\n');

	return (0);
}



















