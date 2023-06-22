#include <stdio.h>

/**
 * main - a program that prints the total number of command
 * line arguments entered apart from the program name
 *
 * @argc: command line argument count
 * @argv: command line argumnt varariable
 * Return: Return something
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc -1);
	return (0);
}
