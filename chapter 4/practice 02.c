#include<stdio.h>

int main() {
    // program to print multiplication table of a given number using for loop
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=1;i<11;i++) {
        printf("%d*%d=%d \n",n,i,n*i);
    }
    return 0;
}