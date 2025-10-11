#include<stdio.h>

int main() {
    // Write a program to run first"n" natural numbers using for loop
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("The value of i is %d\n",i);
    }
    return 0;
}