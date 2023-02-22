#ifndef main_h
#define main_h

#include<unistd.h>

void print_alphabet(void);
int _putchar(char c);

/**
* print_alphabet - Prints all the small letters of the alphabet followed
* by a trailing new line character.
**/
void print_alphabet(void)
{
int letter;
for (letter = 97; letter < 123; letter++)
_putchar(letter);
_putchar('\n');
}

#endif
