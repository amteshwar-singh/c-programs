// program to calculate factorial of a given number using while loop
#include <stdio.h>

int main()
{
    int n, product = 1, i = 1;
    printf("\n Enter Number:");
    scanf("%d", &n);
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("\n The factorial is %d ", product);
    return 0;
}