#include<stdio.h>
int main(){
    int mb;
    printf("enter your number mb:");
    scanf("%d",&mb);
    int kb=mb*1024; 
    float gb=(float)mb/1024;
    printf("kb =%ld\n",kb);
    printf("gb=%.2f\n",gb);
    return 0;
}
