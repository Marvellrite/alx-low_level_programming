#include"main.h"

/**
* _islower - Checks wether a character is lower or not.
*  Return: 1 if character is lower case, 0 if   character is not.
* @c: The numeric value of the letter to be checked.
**/
int _islower(int c)
{
char character = c;
if (character >= 97 && character <= 122)
return (1);
else
return (0);
}
