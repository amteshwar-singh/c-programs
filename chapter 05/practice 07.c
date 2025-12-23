// use function to print this pattern(first n lines)
/*
*

***

*****
*/
#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {
        // this loop runs from 0 to 2
        // if i=0 print 1 star
        // if i=1 print 3 star
        // if i=2 print 5 star
        // no. of stars=2i+1(property of odd numbers)
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}