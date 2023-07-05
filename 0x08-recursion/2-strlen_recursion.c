 #include "main.h"
  2
  3 /**
  4  * _strlen_recursion - a function that returns the length of
  5  * a string recursively
  6  *
  7  * @s: pointer to a string parameter
  8  * Return: Always (0)
  9  */
 10
 11 int _strlen_recursion(char *s)
 12 {
 13         int count = 0;
 14
 15         if (s[0] == '\0')
 16         {
 17                 return (count);
 18         }
 19         else
 20         {
 21                 return (1 + (_strlen_recursion(s + 1)));
 22         }
 23 }
