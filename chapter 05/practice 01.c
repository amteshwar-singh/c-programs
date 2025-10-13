#include<stdio.h>
// program to find average of three numbers using function
float average(int,int,int);
float average(int a,int b,int c){
    return ((a+b+c)/3.0);
}
int main() {
    int a,b,c;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);
    printf("The average is %.2f",average(a,b,c));
    return 0;
}