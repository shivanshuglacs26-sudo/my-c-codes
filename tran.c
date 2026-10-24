#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your number");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("equal",a,b,c);

    }
    else if(a==b||a==c){
        printf("eso",a,b,c);
    }
    else{
        printf("secalen",a,b,c);
    }
    return 0;
}