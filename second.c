#include<stdio.h>
int main(){
    int sec;
    printf("enter your sec");
    scanf("%d",&sec);
    int hh=sec/3600;
    int mm=sec/60;
    printf("hh=%d\n",hh);
    printf("mm=%d\n",mm);

    return 0;

}