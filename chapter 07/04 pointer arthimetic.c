// A pointer can be incremented to point to the next memory location of that type
#include<stdio.h>

int main() {
    int a=5;
    int* ptr=&a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
    printf("the address of a is %u\n",ptr);

    char b='A';
    char* ptr1=&b;
    printf("the address of b is %u\n",&b);
    printf("the address of b is %u\n",ptr1);
    ptr1++;
    printf("the address of b is %u\n",ptr1);
    return 0;
}