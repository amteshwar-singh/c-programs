#include <stdio.h>

void swap(int*, int*);
void swap(int* a, int* b)
{
    int temporary;
    temporary =*a;
    *a = *b;
    *b = temporary;
}

int main()
{
    int a = 4, b = 6;
    swap(&a, &b);
    printf("The value of a is %d and the value of b is %d", a, b);
    return 0;
}