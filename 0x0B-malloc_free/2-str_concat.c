#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, len, count1 = 0;
	int count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2  = "";
	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;
	len = count1 + count2;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ptr[count1 + i] = s2[i];
	ptr[len + 1] = '\0';

	return (ptr);
}
