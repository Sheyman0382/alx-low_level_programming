#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the name of the program
 *
 * @argc: command argument count
 * @argv: command line argumunt variable
 * Return: Return nothing
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
