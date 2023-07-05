 #include "main.h"
  2
  3 /**
  4  * _puts_recursion - a function that prints a string, followed by a new line.
  5  *
  6  * @s: a pointer to a string parameter
  7  * Return: Always (0)
  8  */
  9
 10 void _puts_recursion(char *s)
 11 {
 12         int i = 0;
 13
 14         if (s[i] == '\0')
 15         {
 16                 _putchar(10);
 17                 return;
 18         }
 19         else
 20         {
 21                 _putchar(s[i]);
 22                 _puts_recursion(s + 1);
 23         }
 24 }
