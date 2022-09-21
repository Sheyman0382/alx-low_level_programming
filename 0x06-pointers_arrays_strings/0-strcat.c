#include "main"

/** 
  * _strcat - concatenates the string pointed to by @scr to
  * the end of the string pointed to by @dest
  * @dest: string that will be appended
  * @scr: string that will be concatenated on
  *
  * Return: returns pointer to @dest
  */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];
	return (dest);
}
