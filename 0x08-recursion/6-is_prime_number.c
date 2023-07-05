 #include "main.h"
  2
  3 /**
  4  * isprimem - a function that checks if an integer is a
  5  * prime number
  6  *
  7  * @a: the integer to be checked
  8  * @b: increamental number
  9  *
 10  * Return: integer
 11  */
 12
 13 int isprimem(int a, int b)
 14 {
 15         if (a == b)
 16                 return (1);
 17         else if (a % b == 0)
 18                 return (0);
 19         else
 20                 return (isprimem(a, b + 1));
 21 }
 22 /**
 23  * is_prime_number - a function that checks if an integer
 24  * is a prime inumber
 25  *
 26  * @n: the integer to be checked
 27  * Return: return something
 28  */
 29
 30 int is_prime_number(int n)
 31 {
 32         if (n <= 1)
 33                 return (0);
 34         return (isprimem(n, 2));
 35 }
