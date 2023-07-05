#include "main.h"
  2 /**
  3   * _lenght - checks the length of a string
  4   * @s: is the string
  5   * Return: return the leng of the string
  6 **/
  7 int _lenght(char *s)
  8 {
  9         if (*s == '\0')
 10                 return (0);
 11         return (1 + _lenght(s + 1));
 12 }
 13
 14 /**
 15  * checkp - checks if the string is palindrome
 16  * @i: is the index
 17  * @lg: is the length of the string
 18  * @s: is the string
 19  * Return: 1 if is polindrome or 0 if not
 20 **/
 21 int checkp(int i, int lg, char *s)
 22 {
 23         if (lg > 0)
 24         {
 25                 if (s[i] == s[lg])
 26                 {
 27                         return (checkp(i + 1, lg - 1, s));
 28                 }
 29                 else if (s[i] != s[lg])
 30                 {
 31                         return (0);
 32                 }
 33                 else
 34                 {
 35                         return (1);
 36                 }
 37         }
 38         return (1);
 39 }
 40
 41
 42 /**
 43   * is_palindrome - Checks if a string is a palindrome
 44   * @s: is the string
 45   * Return: return 1 if the string is a palindrome or 0 otherwise
 46 **/
 47 int is_palindrome(char *s)
 48 {
 49         return (checkp(0, _lenght(s) - 1, s));
 50 }
