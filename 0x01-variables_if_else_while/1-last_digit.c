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
if (last < 0)
{
last = last / -1;
}
printf("The last digit of %d is %d\n", n, last);
return (0);
}
