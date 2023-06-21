#include <stdio.h>

/**
 * main - a program that prints the total number of command
 * line arguments entered
 *
 * @argc: command line argument count 
 * @argv: command line argumnt varariable
 * Return: Return something
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv);
	printf("%d \n", argc);
	return (0);
}
