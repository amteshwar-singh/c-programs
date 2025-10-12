#include<stdio.h>

int main() {
    
    if(1){
        printf("This if is executed\n");
    }
    if(2349){
        printf("This if is executed\n");
    }
    if(2.74){
        printf("This if is executed\n");
    }
    if('c'){
        printf("This character inside if is executed\n");
    }
    if(0){
        printf("This if will not be executed\n");
    }
    return 0;
}