
/**
* _isupper - Indicates if a character is an uppercase
* letter or not.
* @c: The numerical value or the character to be
* checked.
*
* Return: 1 if c gives an uppercase or 0 of it yields
* a lowercase.
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}

}
