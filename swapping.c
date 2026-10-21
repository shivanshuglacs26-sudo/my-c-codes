#include <stdio.h>
int main(){
    int a=41;
    int b=-45;
    int tem=a;
    a=b;
    b=tem;
    printf("swapping ke bad a=%d\n",a);
    printf("swapping ke bad b=%d\n",b);
    return 0;
}

