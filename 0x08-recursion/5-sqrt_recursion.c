 #include "main.h"
  2
  3 /**
  4  * sqrt2 - a function that checks if the square of a number
  5  * is equal to the number given
  6  *
  7  * @a: the square root of the number to be found
  8  * @b: the squre of the number to be checked
  9  * Return: return something
 10  */
 11
 12 int sqrt2(int a, int b)
 13 {
 14         if (a == b * b)
 15                 return (b);
 16         if (b * b > a)
 17                 return (-1);
 18         return (sqrt2(a, b + 1));
 19 }
 20 /**
 21  * _sqrt_recursion - a function that prints the square ro0t
 22  * of a number
 23  *
 24  * @n: the square root of a number to be found
 25  * Return: an integer
 26  */
 27
 28 int _sqrt_recursion(int n)
 29 {
 30         return (sqrt2(n, 1));
 31 }
