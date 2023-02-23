#include"main.h"

/**
* print_numbers - Prints the numbers from 0 to 9
* excluding 2 and 4 followed by a new line.
*/
void print_most_numbers(void)
{
int count;

for (count = 48; (count >= 48 && count <= 57);
count++)
{
int letter = count;
  
if (count == 50 || count == 52)
letter = 0;
_putchar(letter);
}
_putchar('\n');
}
