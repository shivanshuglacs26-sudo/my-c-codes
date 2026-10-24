#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    
        if(age<18){
            printf("chil and not eligibal for vote ",age);
        }
        else if(age>=18&&age<60){
            printf("adult and eligibal for vote",age);
        }
        else{
            printf("senior and eligibal for vote",age);
        }
    
    return 0;
}