#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "First, solve the School problem. Then, write the code.";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", (t == NULL ? "nil": t));
    return (0);
}
