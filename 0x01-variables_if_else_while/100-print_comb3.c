#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (!(i >= j))
			{
				putchar(i);
				putchar(j);
				if ((i != '8') || (j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
