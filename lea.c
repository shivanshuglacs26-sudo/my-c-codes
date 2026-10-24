#include<stdio.h>
int main(){
    int year;
    printf("enter your number");
    scanf("%d",&year);
    if(year%400==0){
        if(year%4==0){
            printf("leap year hai");
        }
        else if(year%100!=0){
            printf("leap year hai");
        }
    }
    else{
        printf("leap year nahi hai");
    }
   return 0; 
}