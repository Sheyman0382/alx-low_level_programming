#include "main.h"
  2
  3 /**
  4  * _pow_recursion - a function that finds the power of a digit
  5  *
  6  * @x: digit
  7  * @y: the power a number is raised to
  8  * Return: the power of a digit
  9  */
 10
 11 int _pow_recursion(int x, int y)
 12 {
 13         if (y < 0)
 14                 return (-1);
 15         if (y == 0)
 16                 return (1);
 17         return (x * (_pow_recursion(x, y - 1)));
 18 }
