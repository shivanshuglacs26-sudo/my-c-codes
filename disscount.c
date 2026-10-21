#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    if((age>10)&&(age<=30)||(age>60)){
        printf("extra discount milega because your student%d",age);
    }
    else{
        printf("no discount because disscount for student and old person%d",age);
    }
    return 0;
}