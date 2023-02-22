#ifndef main_h
#define main_h

#include<unistd.h>

int _putchar(char c);
void print_alphabet(void);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_alphabet - Prints all the small letters of the alphabet followed
* by a trailing new line character.
**/
void print_alphabet(void)
{
int letter;
for (letter = 97; letter < 123; letter++)
_putchar (letter);
_putchar ('\n');
}

#endif
