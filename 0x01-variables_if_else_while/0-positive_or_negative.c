#include <stdlib.h>
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
        if (n<0)
        {
            printf("%ld is negative", n);
        }
        
        else if (n==0)
        {
            printf("%ld is zero", n);
        }
        
        else
        {
            printf("%ld is positive", n);
        }
        
        return (0);
}
