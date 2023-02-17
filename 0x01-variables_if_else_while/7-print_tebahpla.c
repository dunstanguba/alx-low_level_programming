#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char j = 'z';

	while (j >= 'a')
	{
		putchar(j);
		j--;
	}

	putchar('\n');
	return (0);
}
