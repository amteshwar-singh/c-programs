// program having a variable 'i'.Print the address of'i'.Pass this variable to a 
// function and print its address. are these addresss same and why

// pointer example
#include <stdio.h>
int returning_5(int* ptr){
    printf("The value of ptr is %p\n", ptr);
    printf("The value at ptr is %d" ,*ptr);
    return 5;
}
int main()
{
    int i = 52;
    int* ptr = &i;
    printf("The address of i is %p \n", ptr);
    returning_5(ptr);
    return 0;
}