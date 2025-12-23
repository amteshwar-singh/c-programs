#include<stdio.h>

int main() {
    int marks[]={55,69,72,47};
    int* ptr= marks; // same as &marks
    for (int i=0;i<4;i++) {
        printf("The marks at index %d is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}