#include<stdio.h>
int main(){
    int ass,atten;
    printf("enter your assignment");
    scanf("%d",&ass);
    printf("enter your attendence");
    scanf("%d",&atten);
    if((atten>=75)&&(ass>=1)){
        printf("eligible for exam ",atten,ass);
    }
    else{
        printf("not eligible for exam ",atten,ass);
    }
    return 0;
}