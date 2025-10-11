#include <stdio.h>

int main()
{
    int a, b, c;
    float si;

    printf("Enter Principal");
    scanf("%d", &a);

    printf("Enter Rate");
    scanf("%d", &b);

    printf("Enter Time");
    scanf("%d", &c);

    printf("Simple Interest is %.2f", si = (a * b * c) / 100);

    return 0;
}