#include"main.h"

/**
* print_alphabet_x10 - Prints the letters of the alphabet 10 times.
 **/

void print_alphabet_x10(void)
{
int count;

for (count = 0; count < 10; count++)
{
int letter;

for (letter = 97; letter < 123; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
