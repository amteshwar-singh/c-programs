#include<stdio.h>

int main() {
    // program to print multiplication table of a given number in reversed order using for loop
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=10;i;i--)
         {
        printf("%d*%d=%d \n",n,i,n*i);
    }
    return 0;
}