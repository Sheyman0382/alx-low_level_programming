#include "main.h"

/**
  * check_string - a function to check if a string contains a binary digits
  * 
  * @str: a pointer to a string of digits
  * Return: either 0 or 1
  */

int check_string(const char *str)
{
	int i;
	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != '0' && str[i] != '1')
			return (0);
	}
	return (1);
}

/**
  * _strlem - a function that returns the length of a string
  * 
  * ptr: a pointer to a string of digits
  * 
  * Return: an integer
  */

int _strlen(const char *ptr)
{
	int i, count = 0;

	for (i = 0; ptr[i] != '\0'; i++)
		count++;
	return (count);
}

/**
  * power - a function that finds the exponential of a base number

  * @a: a placeholder for the base value
  * @b: a placeholder for the power to which the base number is to be raised
  * Return: an interger
  */

int power(int a, int b)
{
	int pow = 1;

	if (b == 0)
		return (1);
	while (b != 0)
	{
		pow = pow * a;
		b--;
	}
	return (pow);
}

/**
  * binary_to_uint - a function that converts a binary to a unit
  * @b: a place holder for a string
  * Return: an integer
  */

unsigned int binary_to_uint(const char *b)
{
	int a, len, num, powe, expo = 0, base = 2;
	unsigned int temp, result = 0;

	a = check_string(b);
	if (a == 0)
		return (0);
	
	len = _strlen(b);

	while (len > 0)
	{
		num = ((b[len - 1]) - '0');
		powe = power(base, expo);
		if (num == 1)
		{
			temp = num * powe;
			result = result + temp;
		}
		expo++;
		len--;
	}
	return (result);
}
