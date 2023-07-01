#include <stdio.h>

/**
 * main - a program that prints the name of the current file
 * using a predefined macro
 *
 * Return: Nothing
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
