#include "main.h"
  2
  3 /**
  4  * factorial - a function that calculates the factorial of a number
  5  *
  6  * @n: the number's factorial to be calculated
  7  * Return: an integer
  8  */
  9
 10 int factorial(int n)
 11 {
 12         if (n < 0)
 13                 return (-1);
 14         if (n == 0)
 15         {
 16                 return (1);
 17         }
 18         else
 19         {
 20                 return (n * factorial(n - 1));
 21         }
 22 }
