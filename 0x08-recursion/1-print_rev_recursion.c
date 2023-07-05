 #include "main.h"
  2
  3 /**
  4  * _print_rev_recursion - a function that prints the reverse of a string
  5  * in a recursive way
  6  *
  7  * @s: pointer to a string parameter
  8  * Return: Always (0)
  9  */
 10
 11 void _print_rev_recursion(char *s)
 12 {
 13         int i = 0;
 14
 15         if (s[i] == '\0')
 16         {
 17                 return;
 18         }
 19         else
 20         {
 21                 _print_rev_recursion(s + 1);
 22                 _putchar(s[i]);
 23         }
 24 }
