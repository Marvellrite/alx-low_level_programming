#include"main.h"

/**
* print_line - Prints a line whose length depends on n.
* @n: The integer that determines the
* length of the line.
*/
void print_line(int n)
{
int step;
if (n > 0)
{

for (step = 0; step < n; step++)
{
_putchar('_');
}

}
_putchar ('\n');
}
