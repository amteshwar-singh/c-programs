// function is a way to break our code into chunks so that it is possible for a programmer to reuse them
// a function is a block of code which performs a particular task
#include <stdio.h>

// function prototype            int sum will give us an integer and(int,int) will take two integers from us
int sum(int,int);

// function defination
int sum(int x,int y){
   // printf("The sum is %d\n",x+y);
    return x+y;
}

int main()
{
    int a = 1;
    int b = 2;

   // int c = a + b;
    //printf("The sum is %d\n", c);
    int c=sum(a,b);// function call
    printf("%d\n",c);

    int a1 = 11;
    int b1 = 23;

   // int c1 = a1 + b1;
    //printf("The sum is %d\n", c1);
    int c1=sum(a1,b1);// function call
    printf("%d\n",c1);

    int a2 = 8;
    int b2 = 4;

   // int c2 = a2 + b2;
   // printf("The sum is %d\n", c2);
   int c2=sum(a2,b2);// function call
    printf("%d\n",c2);

    return 0;
}