#include"main.h"

/**
* _isalpha - Checks wether a character is lower or not.
*@c: The numeric value of the letter to be checked.
*
* Return: 1 if c is a letter and 0 if it is not.
**/
int _isalpha(int c)
{
char character = c;
if ((character >= 97 && character <= 122) ||
(character >= 65 && character <= 90))
return (1);
else
return (0);
}
