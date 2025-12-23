#include <stdio.h>
// pointer is a variablre stores address of another variable
int main()
{
    int i = 72;
    int* j = &i;
    printf("The address of i is %p\n", &i); //%u to see address in integer
    printf("The address of i is %p\n", j);
    printf("The value at address j is %d\n",*j);
    printf("The value at address j is %d\n",*(&i));

    return 0;
}