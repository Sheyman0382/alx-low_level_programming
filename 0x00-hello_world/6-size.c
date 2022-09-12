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

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float)) 
	return (0);
}
