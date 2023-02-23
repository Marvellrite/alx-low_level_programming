#include"main.h"

/**
* print_last_digit - Prints and returns the last digit of an integer.
* @n: The integer whose last value is to be returned.
* Return: An integer.
*/
int print_last_digit(int n)
{
int ldigit;

if (n < 0)
ldigit = (n / -1) % 10;
else
ldigit = n % 10;

_putchar(ldigit + '0');
return (ldigit);
}
