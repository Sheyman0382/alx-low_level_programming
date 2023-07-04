#include "dog.h"

/**
*_strlen - returns length of a string
*@str: string to be counted
*Return: returns length of string
*/

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}

/**
*_strcpy - copy string pointed by src into dest variable
*@str1:buffer storing string copy
*@str2: buffer storing string to copy
*Return:returns copied string
*/

char *_strcpy(char *str1, const char *str2)
{
	int i;

	for (i = 0; str2[i] != '\0'; i++)
	{
		str1[i] = str2[i];
	}
	str1[i] = '\0';
	return (str1);
}


/**
 * new_dog - a new profile for a new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the name of the owner of the new dog
 *
 * Return: a structure pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	(*dogg).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dogg).name == NULL)
	{
		free((*dogg).name);
		return (NULL);
	}

	(*dogg).owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*dogg).owner == NULL)
	{
		free((*dogg).owner);
		return (NULL);
	}
	(*dogg).name = _strcpy((*dogg).name,name);
	(*dogg).age = age;
	(*dogg).owner = _strcpy((*dogg).owner, owner);

	return (dogg);
}
