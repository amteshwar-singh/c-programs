#include <stdio.h>
// program to print first'n' natural numbers using do while loop
int main()
{
    int n,i=1;
    printf("\n Enter value of n:");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);

    return 0;
}