#include <stdio.h>

/**
 * main - Prints the size of many var types*n
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lii;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of an int: %li byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %li byte(s)\n", sizeof(lii));
	printf("Size of a float: %li bytes(s)\n", sizeof(f));
	return (0);
}
