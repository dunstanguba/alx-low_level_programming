#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(48 + j);
		j++;
	}

	putchar('\n');
	return (0);
}
