// program to calculate sum of numbers occuring in the multiplication table of 8 (8*1 to 8*10)
#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum += (8 * i);
    }
    printf("The sum of the table of 8 is %d", sum);
    return 0;
}