#include<stdio.h>
int main(){
    int  age;
    printf("enter your age");
    scanf("%d",&age);
    if(age<12){
        printf("child hai jiski ticket = 100rs",age);
    }
    else if((age>=12)&&(age<60)){
printf("adult ticket=200rs ",age);
    }

    else {
        printf(" senior ticket =150rs +sunday ko 50 rs extra",age);
    }
    return 0;
}