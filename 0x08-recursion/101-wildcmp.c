 #include "main.h"
  2
  3 /**
  4 * wildcmp - compares two strings and returns 1 if identical
  5 * @s1: string to be checked
  6 * @s2: pattern to be used
  7 *
  8 * Return: 1 if identical, 0 otherwise
  9 */
 10
 11 int wildcmp(char *s1, char *s2)
 12 {
 13         if (*s2 == '\0')
 14                 return (*s1 == '\0');
 15         if (*s2 == *s1)
 16                 return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
 17         if (*s2 == '*')
 18                 return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
 19         return (0);
 20 }
