#include<stdio.h>
#include<string.h>

int main() {
    int a= strcmp("deep","deep");
    int b= strcmp("deep","fake");
    int c= strcmp("fake","deep");
    printf(" %d\n",a);
    printf("%d\n",b);
    printf(" %d",c);
    
    return 0;
}