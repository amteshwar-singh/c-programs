// to find area of a square
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("\nEnter side: ");
    scanf("%d", &a);
    printf("\nArea of the square is %.2f", pow(a, 2));
    return 0;
}