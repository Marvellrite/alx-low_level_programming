#include"main.h"

/**
* _islower - Checks wether a character is lower or not.
*  Return: 1 if c is a letter and 0 if it is not.
* @c: The numeric value of the letter to be checked.
**/
int _isalpha(int c)
{
char character = c;
 if ((character >= 97 && character <= 122) || (character >= 65 && character <= 90))
return (1);
else
return (0);
}
