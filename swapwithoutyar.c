#include<stdio.h>
int main(){
    int a=20;
    int b=30;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping ke bad a=%d\n",a);
    printf("swapping ke bad b=%d\n",b);
    return 0;
}