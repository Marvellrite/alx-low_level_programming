#include"main.h"

/**
* more_numbers - Prints the numbers from 1 to 14 ten times
* followed by a new line.
*/
void more_numbers(void)
{
int lines, tens = 0, digits, units;
for (lines = 0; lines < 10; lines++)
{
units = 48;
tens = 0;
for (digits = 0; digits < 15; digits++)
{
if (digits == 10)
{
tens = 49;
units = 48;
}
_putchar (tens);
_putchar(units);
units++;
}
_putchar('\n');
}
}
