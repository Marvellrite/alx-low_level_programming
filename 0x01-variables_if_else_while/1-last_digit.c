#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point.
* Return: 0 always if successful
**/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last = n % 10;
if (last > 5)
printf("The last digit of %d is %d and is greater than 5\n", n, last);

if (last == 0)
printf("The last digit of %d is %d and is 0\n", n, last);

if (last < 6 && last != 0)
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}
