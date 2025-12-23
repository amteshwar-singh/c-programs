// write a program using a function which calculates the sum and average of two 
// numbers.use pointers and print value of sum and average in main()
#include<stdio.h>
int* sum(int a,int b){
    int c=a+b;
    int* ptr=&c;
    printf("The sum is %d\n",c);
    return ptr;
}
int* average(int a, int b){
    int d=(a+b)/2;
    int* ptr= &d;
    printf("The average is %d\n",d);
    return ptr;
}
int main() {
    int x=4;
    int y=6;
    int* ptr1;
    int* ptr2;
    
    ptr1=sum(x,y);
    ptr2=average(x,y);

    printf("The address of sum is %p and of average is %p",ptr1,ptr2);
    return 0;
}
