#include <stdio.h>

int main()
{
    int a = 8;
    float b = 1.5f;
    char c = 'a';

    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    printf("sizeof a = %zu bytes\n", sizeof a);
    printf("sizeof b = %zu bytes\n", sizeof b);
    printf("sizeof c = %zu bytes\n", sizeof c);

    return 0;
}
