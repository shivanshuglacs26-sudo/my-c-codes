#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if(age>=18){
        printf("eligible for licence ",age);
    }
    else{
        printf("not eligible for licence",age);
    }
    return 0;
}