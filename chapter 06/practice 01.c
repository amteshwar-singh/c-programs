// pointer example
#include <stdio.h>

int main()
{
    int i = 52;
    int* j = &i;
    printf("The address of i is %p \n", j);
    printf("The value of i is %d", *j);
    return 0;
}