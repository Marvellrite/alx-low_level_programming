/**
* _isdigit - Indicates wether a character is numeric or not.
* @c: The character to be checked.
* Return: 1 if the character is numeric or 0 if not.
*/
int _isdigit(int c)
{
char letter = c;
if (letter >= 48 && letter <= 57)
return (1);
else
return (0);
}
