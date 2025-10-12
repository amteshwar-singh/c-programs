#include<stdio.h>
// program to print multiplication table of a given number using while loop
int main() {
    int i=0,n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(i<=10) 
    {
        i++;
        s=n*i;
        printf("%d*%d = %d \n",n,i,s);
    }
    return 0;
}