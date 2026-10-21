
#include<stdio.h>
int main(){
    int n;
    printf("enter your time");
    scanf("%d",&n);
    if(n>=18||n<=5){
        printf("night hai fair=15rs/km",n);
    }
    else if(n>=6&&n<=17){
        printf("day fare=10rs/km",n);
    }
    else{
        printf("error",n);
    }

}
