// program to sum first 10 natural numbers using while loop
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    while (i < 11)
    {
        sum += i;
        i++;
    }
    printf("The sum of first 10 natural numbers is %d \n", sum);
    return 0;
}